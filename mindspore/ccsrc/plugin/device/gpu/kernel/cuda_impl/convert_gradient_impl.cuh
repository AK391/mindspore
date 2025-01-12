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

#ifndef MINDSPORE_CCSRC_KERNEL_GPU_CUDA_IMP_CONVERTGRADIENT_H_
#define MINDSPORE_CCSRC_KERNEL_GPU_CUDA_IMP_CONVERTGRADIENT_H_

#include "plugin/device/gpu/hal/device/cuda_common.h"
template <typename T>
void ConvertGradient(const size_t size, const size_t height_h, const size_t height_w, const size_t batchwidth,
                     const size_t width, T *input_addr, T *outt_addr, cudaStream_t cuda_stream);

template <typename T>
void ConvertGradientBack(const size_t size, const size_t height_h, const size_t height_w, const size_t batchwidth,
                         const size_t width, T *input_addr, T *output_addr, cudaStream_t cuda_stream);

template <typename T>
void ConvertGradientBack(const size_t size, const size_t height_h, const size_t height_w, const size_t ori_h,
                         const size_t ori_w, const size_t batchwidth, const size_t width, T *input_addr, T *output_addr,
                         cudaStream_t cuda_stream);

#endif  // MINDSPORE_CCSRC_KERNEL_GPU_CUDA_IMP_CONVERTGRADIENT_H_
