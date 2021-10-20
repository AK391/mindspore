/**
 * Copyright 2020-2021 Huawei Technologies Co., Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "backend/kernel_compiler/cpu/eigen/solve_triangular_cpu_kernel.h"
#include <Eigen/Dense>
#include <vector>
#include <string>
#include <type_traits>

namespace mindspore {
namespace kernel {
using Eigen::Dynamic;
using Eigen::Lower;
using Eigen::Map;
using Eigen::MatrixBase;
using Eigen::RowMajor;
using Eigen::Upper;
template <typename T>
using Matrix = Eigen::Matrix<T, Dynamic, Dynamic, RowMajor>;
constexpr auto kSolveTriangularInputsNum = 2;
constexpr auto kSolveTriangularOutputsNum = 1;
constexpr auto kAVectorxDimNum = 1;
constexpr auto kAMatrixDimNum = 2;
template <typename T>
void SolveTriangularCPUKernel<T>::InitKernel(const CNodePtr &kernel_node) {
  auto A_shape = AnfAlgo::GetPrevNodeOutputInferShape(kernel_node, 0);
  auto b_shape = AnfAlgo::GetPrevNodeOutputInferShape(kernel_node, 1);

  CHECK_KERNEL_INPUTS_NUM(A_shape.size(), kAMatrixDimNum, kernel_name_);
  if (A_shape[kDim0] != A_shape[kDim1]) {
    MS_LOG(EXCEPTION) << "wrong array shape, A should be a squre matrix, but got [" << A_shape[kDim0] << " X "
                      << A_shape[kDim1] << "]";
  }
  m = A_shape[kDim0];

  if (b_shape.size() != kAVectorxDimNum && b_shape.size() != kAMatrixDimNum) {
    MS_LOG(EXCEPTION) << "wrong array shape, b should be 1D or 2D, but got [" << b_shape.size() << "] dimensions";
  }
  if (SizeToInt(b_shape[kDim0]) != m) {
    MS_LOG(EXCEPTION) << "wrong array shape, b should match the shape of A, excepted [" << m << "] but got ["
                      << b_shape[kDim0] << "]";
  }
  if (b_shape.size() == kAVectorxDimNum || (b_shape.size() == kAMatrixDimNum && b_shape[kDim1] == 1)) {
    n = 1;
  } else {
    n = b_shape[kDim1];
  }
  lower_ = AnfAlgo::GetNodeAttr<bool>(kernel_node, LOWER);
  const std::string trans = AnfAlgo::GetNodeAttr<std::string>(kernel_node, TRANS);
  if (trans == "N") {
    trans_ = false;
  } else if (trans == "T") {
    trans_ = true;
  } else {
    MS_LOG(EXCEPTION) << "trans should be in [N, T], but got [" << trans << "]";
  }
}

template <typename T>
bool SolveTriangularCPUKernel<T>::Launch(const std::vector<AddressPtr> &inputs,
                                         const std::vector<AddressPtr> &workspace,
                                         const std::vector<AddressPtr> &outputs) {
  CHECK_KERNEL_INPUTS_NUM(inputs.size(), kSolveTriangularInputsNum, kernel_name_);
  CHECK_KERNEL_OUTPUTS_NUM(outputs.size(), kSolveTriangularOutputsNum, kernel_name_);

  auto A_addr = reinterpret_cast<T *>(inputs[0]->addr);
  auto b_addr = reinterpret_cast<T *>(inputs[1]->addr);
  auto output_addr = reinterpret_cast<T *>(outputs[0]->addr);

  Map<Matrix<T>> A(A_addr, m, m);
  Map<Matrix<T>> b(b_addr, m, n);
  Map<Matrix<T>> output(output_addr, m, n);

  if (trans_) {
    A.transposeInPlace();
    lower_ = !lower_;
  }

  if (lower_) {
    output = A.template triangularView<Lower>().solve(b);
  } else {
    output = A.template triangularView<Upper>().solve(b);
  }
  // bypass the unused variable rule
  (void)(output);

  return true;
}
}  // namespace kernel
}  // namespace mindspore