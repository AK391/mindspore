/**
 * Copyright 2020 Huawei Technologies Co., Ltd
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

#ifndef MINDSPORE_CCSRC_KERNEL_GPU_CUDA_IMP_RANDOM_CATEGORICAL_IMPL_H_
#define MINDSPORE_CCSRC_KERNEL_GPU_CUDA_IMP_RANDOM_CATEGORICAL_IMPL_H_

#include "plugin/device/gpu/hal/device/cuda_common.h"
template <typename T>
void GetCdfKernel(const T *logits_addr, double** dev_cdf, const size_t batch_size, const size_t num_classes,
                  cudaStream_t cuda_stream);
template <typename S>
void RandomCategoricalKernel(const size_t num_samples, double** dev_rand, double** dev_cdf,
                             const size_t batch_size, const size_t num_classes, S *output_addr,
                             cudaStream_t cuda_stream);

#endif  // MINDSPORE_CCSRC_KERNEL_GPU_CUDA_IMP_RANDOM_CATEGORICAL_IMPL_H_
