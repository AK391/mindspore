/**
 * Copyright 2021 Huawei Technologies Co., Ltd
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
#include "src/ops/ops_def.h"
#include "src/ops/ops_func_declare.h"

OP_TYPE_DEF_BEGIN(PrimitiveType)
OP_TYPE(Abs)
OP_TYPE(Activation)
OP_TYPE(ActivationGrad)
OP_TYPE(Adam)
OP_TYPE(AddFusion)
OP_TYPE(AdderFusion)
OP_TYPE(AddGrad)
OP_TYPE(AddN)
OP_TYPE(All)
OP_TYPE(ApplyMomentum)
OP_TYPE(ArgMaxFusion)
OP_TYPE(ArgMinFusion)
OP_TYPE(Assert)
OP_TYPE(Assign)
OP_TYPE(AssignAdd)
OP_TYPE(AudioSpectrogram)
OP_TYPE(AvgPoolFusion)
OP_TYPE(BatchNorm)
OP_TYPE(BatchNormGrad)
OP_TYPE(BatchToSpace)
OP_TYPE(BatchToSpaceND)
OP_TYPE(BiasAdd)
OP_TYPE(BinaryCrossEntropy)
OP_TYPE(BinaryCrossEntropyGrad)
OP_TYPE(BiasGrad)
OP_TYPE(BroadcastTo)
OP_TYPE(Cast)
OP_TYPE(Ceil)
OP_TYPE(Clip)
OP_TYPE(Concat)
OP_TYPE(ControlDepend)
OP_TYPE(Conv2DBackpropFilterFusion)
OP_TYPE(Conv2DBackpropInputFusion)
OP_TYPE(Conv2DFusion)
OP_TYPE(Conv2dTransposeFusion)
OP_TYPE(Cos)
OP_TYPE(ConstantOfShape)
OP_TYPE(Crop)
OP_TYPE(CustomExtractFeatures)
OP_TYPE(CustomNormalize)
OP_TYPE(CustomPredict)
OP_TYPE(DeConv2DGradFilter)
OP_TYPE(Depend)
OP_TYPE(DepthToSpace)
OP_TYPE(DetectionPostProcess)
OP_TYPE(DivFusion)
OP_TYPE(DivGrad)
OP_TYPE(Dropout)
OP_TYPE(DropoutGrad)
OP_TYPE(Elu)
OP_TYPE(Eltwise)
OP_TYPE(Equal)
OP_TYPE(EmbeddingLookupFusion)
OP_TYPE(ExpFusion)
OP_TYPE(ExpandDims)
OP_TYPE(FakeQuantWithMinMaxVars)
OP_TYPE(FakeQuantWithMinMaxVarsPerChannel)
OP_TYPE(FftReal)
OP_TYPE(FftImag)
OP_TYPE(Flatten)
OP_TYPE(FlattenGrad)
OP_TYPE(Floor)
OP_TYPE(FloorDiv)
OP_TYPE(FloorMod)
OP_TYPE(Fill)
OP_TYPE(FullConnection)
OP_TYPE(FusedBatchNorm)
OP_TYPE(Gather)
OP_TYPE(GatherNd)
OP_TYPE(Greater)
OP_TYPE(GreaterEqual)
OP_TYPE(HashtableLookup)
OP_TYPE(InstanceNorm)
OP_TYPE(LayerNormFusion)
OP_TYPE(LeakyRelu)
OP_TYPE(Less)
OP_TYPE(LessEqual)
OP_TYPE(Log)
OP_TYPE(LogGrad)
OP_TYPE(LogicalAnd)
OP_TYPE(LogicalNot)
OP_TYPE(LogicalOr)
OP_TYPE(LpNormalization)
OP_TYPE(LRN)
OP_TYPE(LshProjection)
OP_TYPE(LSTM)
OP_TYPE(L2NormalizeFusion)
OP_TYPE(MatMul)
OP_TYPE(Maximum)
OP_TYPE(MaximumGrad)
OP_TYPE(MaxPoolFusion)
OP_TYPE(Merge)
OP_TYPE(Mfcc)
OP_TYPE(Minimum)
OP_TYPE(MinimumGrad)
OP_TYPE(Mod)
OP_TYPE(MulFusion)
OP_TYPE(MulGrad)
OP_TYPE(Neg)
OP_TYPE(NegGrad)
OP_TYPE(NotEqual)
OP_TYPE(NonMaxSuppression)
OP_TYPE(OneHot)
OP_TYPE(OnesLike)
OP_TYPE(PadFusion)
OP_TYPE(PartialFusion)
OP_TYPE(PoolingGrad)
OP_TYPE(PowerGrad)
OP_TYPE(PowFusion)
OP_TYPE(PriorBox)
OP_TYPE(PReLUFusion)
OP_TYPE(QuantDTypeCast)
OP_TYPE(Rank)
OP_TYPE(Range)
OP_TYPE(Reciprocal)
OP_TYPE(RealDiv)
OP_TYPE(ReduceFusion)
OP_TYPE(Reshape)
OP_TYPE(Resize)
OP_TYPE(ReverseSequence)
OP_TYPE(ReverseV2)
OP_TYPE(Rfft)
OP_TYPE(ROIPooling)
OP_TYPE(Round)
OP_TYPE(Rsqrt)
OP_TYPE(ScaleFusion)
OP_TYPE(ScatterNd)
OP_TYPE(SGD)
OP_TYPE(Shape)
OP_TYPE(SigmoidCrossEntropyWithLogits)
OP_TYPE(SigmoidCrossEntropyWithLogitsGrad)
OP_TYPE(Sin)
OP_TYPE(SkipGram)
OP_TYPE(SliceFusion)
OP_TYPE(SmoothL1Loss)
OP_TYPE(SmoothL1LossGrad)
OP_TYPE(Softmax)
OP_TYPE(SoftmaxCrossEntropyWithLogits)
OP_TYPE(SpaceToBatch)
OP_TYPE(SpaceToBatchND)
OP_TYPE(SpaceToDepth)
OP_TYPE(SparseSoftmaxCrossEntropy)
OP_TYPE(SparseToDense)
OP_TYPE(Split)
OP_TYPE(Sqrt)
OP_TYPE(Squeeze)
OP_TYPE(Square)
OP_TYPE(SquaredDifference)
OP_TYPE(Stack)
OP_TYPE(StridedSlice)
OP_TYPE(SubFusion)
OP_TYPE(SubGrad)
OP_TYPE(Switch)
OP_TYPE(TensorListFromTensor)
OP_TYPE(TensorListGetItem)
OP_TYPE(TensorListReserve)
OP_TYPE(TensorListSetItem)
OP_TYPE(TensorListStack)
OP_TYPE(TileFusion)
OP_TYPE(TopKFusion)
OP_TYPE(Transpose)
OP_TYPE(Unique)
OP_TYPE(UnsortedSegmentSum)
OP_TYPE(Unsqueeze)
OP_TYPE(Unstack)
OP_TYPE(While)
OP_TYPE(Where)
OP_TYPE(ZerosLike)
OP_TYPE_DEF_END(PrimitiveType)

OP_SCHEMA_DEF(Abs)
OP_SCHEMA_DEF_END(Abs)

OP_SCHEMA_DEF(Activation)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_ATTR(alpha, float)
OP_ATTR(min_val, float)
OP_ATTR(max_val, float)
OP_SCHEMA_DEF_END(Activation)

OP_SCHEMA_DEF(ActivationGrad)
OP_ATTR_ENUM(type, ActivationType)
OP_ATTR(alpha, float)
OP_SCHEMA_DEF_END(ActivationGrad)

OP_SCHEMA_DEF(Adam)
OP_ATTR(use_locking, bool)
OP_ATTR(use_nesterov, bool)
OP_SCHEMA_DEF_END(Adam)

OP_SCHEMA_DEF(AddFusion)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(AddFusion)

OP_SCHEMA_DEF(AdderFusion)
OP_ATTR_ENUM_WITH_VALUE(format, Format, 0)
OP_ATTR(kernel_size, [long])
OP_ATTR(stride, [long])
OP_ATTR(dilation, [long])
OP_ATTR_ENUM(pad_mode, PadMode)
OP_ATTR(pad_list, [long])
OP_ATTR(group, long)
OP_ATTR(in_channel, long)
OP_ATTR(out_channel, long)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(AdderFusion)

OP_SCHEMA_DEF(AddGrad)
OP_SCHEMA_DEF_END(AddGrad)

OP_SCHEMA_DEF(AddN)
OP_SCHEMA_DEF_END(AddN)

OP_SCHEMA_DEF(All)
OP_ATTR(keep_dims, long)
OP_SCHEMA_DEF_END(All)

OP_SCHEMA_DEF(ApplyMomentum)
OP_ATTR(use_nesterov, bool)
OP_ATTR(use_locking, bool)
OP_ATTR(gradient_scale, float)
OP_SCHEMA_DEF_END(ApplyMomentum)

OP_SCHEMA_DEF(ArgMaxFusion)
OP_ATTR(axis, long)
OP_ATTR_WITH_VALUE(top_k, long, 1)
OP_ATTR(keep_dims, bool)
OP_ATTR(out_max_value, bool)
OP_SCHEMA_DEF_END(ArgMaxFusion)

OP_SCHEMA_DEF(ArgMinFusion)
OP_ATTR(axis, long)
OP_ATTR(top_k, long)
OP_ATTR(keep_dims, bool)
OP_ATTR(out_max_value, bool)
OP_SCHEMA_DEF_END(ArgMinFusion)

OP_SCHEMA_DEF(Assert)
OP_ATTR(summarize, long)
OP_SCHEMA_DEF_END(Assert)

OP_SCHEMA_DEF(Assign)
OP_SCHEMA_DEF_END(Assign)

OP_SCHEMA_DEF(AssignAdd)
OP_SCHEMA_DEF_END(AssignAdd)

OP_SCHEMA_DEF(AudioSpectrogram)
OP_ATTR(window_size, long)
OP_ATTR(stride, long)
OP_ATTR(mag_square, bool)
OP_SCHEMA_DEF_END(AudioSpectrogram)

OP_SCHEMA_DEF(AvgPoolFusion)
OP_ATTR(kernel_size, [long])
OP_ATTR(strides, [long])
OP_ATTR(pad, [long])
OP_ATTR_ENUM(pad_mode, PadMode)
OP_ATTR_ENUM(round_mode, RoundMode)
OP_ATTR_ENUM(format, Format)
OP_ATTR(global, bool)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(AvgPoolFusion)

OP_SCHEMA_DEF(BatchNorm)
OP_ATTR(epsilon, float)
OP_ATTR_ENUM(format, Format)
OP_ATTR(is_training, bool)
OP_SCHEMA_DEF_END(BatchNorm)

OP_SCHEMA_DEF(BatchNormGrad)
OP_ATTR(epsilon, float)
OP_SCHEMA_DEF_END(BatchNormGrad)

OP_SCHEMA_DEF(BatchToSpace)
OP_ATTR(block_size, [long])
OP_ATTR_VEC2D(crops, Vec2D);
OP_SCHEMA_DEF_END(BatchToSpace)

OP_SCHEMA_DEF(BatchToSpaceND)
OP_ATTR(block_shape, [long])
OP_ATTR_VEC2D(crops, Vec2D);
OP_SCHEMA_DEF_END(BatchToSpaceND)

OP_SCHEMA_DEF(BiasAdd)
OP_ATTR_ENUM(format, Format)
OP_SCHEMA_DEF_END(BiasAdd)

OP_SCHEMA_DEF(BinaryCrossEntropy)
OP_ATTR_ENUM(reduction, Reduction)
OP_SCHEMA_DEF_END(BinaryCrossEntropy)

OP_SCHEMA_DEF(BinaryCrossEntropyGrad)
OP_ATTR_ENUM_WITH_VALUE(reduction, Reduction, 1)
OP_SCHEMA_DEF_END(BinaryCrossEntropyGrad)

OP_SCHEMA_DEF(BiasGrad)
OP_SCHEMA_DEF_END(BiasGrad)

OP_SCHEMA_DEF(BroadcastTo)
OP_ATTR(shape, [long])
OP_SCHEMA_DEF_END(BroadcastTo)

OP_SCHEMA_DEF(Cast)
OP_SCHEMA_DEF_END(Cast)

OP_SCHEMA_DEF(Ceil)
OP_SCHEMA_DEF_END(Ceil)

OP_SCHEMA_DEF(Clip)
OP_ATTR(max, float)
OP_ATTR(min, float)
OP_SCHEMA_DEF_END(Clip)

OP_SCHEMA_DEF(Concat)
OP_ATTR(axis, long)
OP_SCHEMA_DEF_END(Concat)

OP_SCHEMA_DEF(ControlDepend)
OP_ATTR(depend_mode, long)
OP_SCHEMA_DEF_END(ControlDepend)

OP_SCHEMA_DEF(Conv2DBackpropFilterFusion)
OP_ATTR_ENUM_WITH_VALUE(format, Format, 0)
OP_ATTR(kernel_size, [long])
OP_ATTR(stride, [long])
OP_ATTR(dilation, [long])
OP_ATTR_ENUM(pad_mode, PadMode)
OP_ATTR(pad_list, [long])
OP_ATTR(mode, long)
OP_ATTR(group, long)
OP_ATTR(in_channel, long)
OP_ATTR(out_channel, long)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(Conv2DBackpropFilterFusion)

OP_SCHEMA_DEF(Conv2DBackpropInputFusion)
OP_ATTR_ENUM_WITH_VALUE(format, Format, 0)
OP_ATTR(kernel_size, [long])
OP_ATTR(stride, [long])
OP_ATTR(dilation, [long])
OP_ATTR_ENUM(pad_mode, PadMode)
OP_ATTR(pad, [long])
OP_ATTR(pad_list, [long])
OP_ATTR(mode, long)
OP_ATTR(group, long)
OP_ATTR(in_channel, long)
OP_ATTR(out_channel, long)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(Conv2DBackpropInputFusion)

OP_SCHEMA_DEF(Conv2DFusion)
OP_ATTR_ENUM_WITH_VALUE(format, Format, 0)
OP_ATTR(kernel_size, [long])
OP_ATTR(stride, [long])
OP_ATTR(dilation, [long])
OP_ATTR_ENUM(pad_mode, PadMode)
OP_ATTR(pad_list, [long])
OP_ATTR(mode, long)
OP_ATTR(group, long)
OP_ATTR(in_channel, long)
OP_ATTR(out_channel, long)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(Conv2DFusion)

OP_SCHEMA_DEF(Conv2dTransposeFusion)
OP_ATTR_ENUM_WITH_VALUE(format, Format, 0)
OP_ATTR(kernel_size, [long])
OP_ATTR(stride, [long])
OP_ATTR(dilation, [long])
OP_ATTR_ENUM(pad_mode, PadMode)
OP_ATTR(pad, [long])
OP_ATTR(pad_list, [long])
OP_ATTR(mode, long)
OP_ATTR(group, long)
OP_ATTR(in_channel, long)
OP_ATTR(out_channel, long)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(Conv2dTransposeFusion)

OP_SCHEMA_DEF(Cos)
OP_SCHEMA_DEF_END(Cos)

OP_SCHEMA_DEF(ConstantOfShape)
OP_ATTR(data_type, long)
OP_ATTR(value, [float])
OP_SCHEMA_DEF_END(ConstantOfShape)

OP_SCHEMA_DEF(Crop)
OP_ATTR(axis, long)
OP_ATTR(offsets, [long])
OP_SCHEMA_DEF_END(Crop)

OP_SCHEMA_DEF(CustomExtractFeatures)
OP_SCHEMA_DEF_END(CustomExtractFeatures)

OP_SCHEMA_DEF(CustomNormalize)
OP_SCHEMA_DEF_END(CustomNormalize)

OP_SCHEMA_DEF(CustomPredict)
OP_ATTR(output_num, long)
OP_ATTR(weight_threshold, float)
OP_SCHEMA_DEF_END(CustomPredict)

OP_SCHEMA_DEF(DeConv2DGradFilter)
OP_ATTR(in_channel, long);
OP_ATTR(out_channel, long);
OP_ATTR(kernel_size, [long]);
OP_ATTR_ENUM(pad_mode, PadMode);
OP_ATTR(pad_list, [long]);
OP_ATTR(stride, [long]);
OP_ATTR(dilation, [long]);
OP_ATTR(group, long);
OP_ATTR_ENUM(format, Format);
OP_ATTR_ENUM(activation_type, ActivationType);
OP_SCHEMA_DEF_END(DeConv2DGradFilter)

OP_SCHEMA_DEF(Depend)
OP_SCHEMA_DEF_END(Depend)

OP_SCHEMA_DEF(DepthToSpace)
OP_ATTR(block_size, long)
OP_ATTR_ENUM_WITH_VALUE(format, Format, 0)
OP_SCHEMA_DEF_END(DepthToSpace)

OP_SCHEMA_DEF(DetectionPostProcess)
OP_ATTR_ENUM_WITH_VALUE(format, Format, 0)
OP_ATTR(input_size, long)
OP_ATTR(scale, [float])
OP_ATTR(nms_iou_threshold, float)
OP_ATTR(nms_score_threshold, float)
OP_ATTR(max_detections, long)
OP_ATTR(detections_per_class, long)
OP_ATTR(max_classes_per_detection, long)
OP_ATTR(num_classes, long)
OP_ATTR(use_regular_nms, bool)
OP_ATTR(out_quantized, bool)
OP_SCHEMA_DEF_END(DetectionPostProcess)

OP_SCHEMA_DEF(DivFusion)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(DivFusion)

OP_SCHEMA_DEF(DivGrad)
OP_SCHEMA_DEF_END(DivGrad)

OP_SCHEMA_DEF(Dropout)
OP_ATTR_WITH_VALUE(keep_prob, float, 0.5)
OP_SCHEMA_DEF_END(Dropout)

OP_SCHEMA_DEF(DropoutGrad)
OP_ATTR(keep_prob, float)
OP_SCHEMA_DEF_END(DropoutGrad)

OP_SCHEMA_DEF(Elu)
OP_ATTR(alpha, float)
OP_SCHEMA_DEF_END(Elu)

OP_SCHEMA_DEF(Eltwise)
OP_ATTR_ENUM(mode, EltwiseMode)
OP_SCHEMA_DEF_END(Eltwise)

OP_SCHEMA_DEF(Equal)
OP_SCHEMA_DEF_END(Equal)

OP_SCHEMA_DEF(EmbeddingLookupFusion)
OP_ATTR(max_norm, float)
OP_SCHEMA_DEF_END(EmbeddingLookupFusion)

OP_SCHEMA_DEF(ExpFusion)
OP_ATTR_WITH_VALUE(base, float, -1)
OP_ATTR_WITH_VALUE(scale, float, 1.0)
OP_ATTR_WITH_VALUE(shift, float, 0.0)
OP_SCHEMA_DEF_END(ExpFusion)

OP_SCHEMA_DEF(ExpandDims)
OP_SCHEMA_DEF_END(ExpandDims)

OP_SCHEMA_DEF(FakeQuantWithMinMaxVars)
OP_ATTR(num_bits, long)
OP_ATTR(narrow_range, bool)
OP_SCHEMA_DEF_END(FakeQuantWithMinMaxVars)

OP_SCHEMA_DEF(FakeQuantWithMinMaxVarsPerChannel)
OP_ATTR(num_bits, long)
OP_ATTR(narrow_range, bool)
OP_SCHEMA_DEF_END(FakeQuantWithMinMaxVarsPerChannel)

OP_SCHEMA_DEF(FftReal)
OP_SCHEMA_DEF_END(FftReal)

OP_SCHEMA_DEF(FftImag)
OP_SCHEMA_DEF_END(FftImag)

OP_SCHEMA_DEF(Flatten)
OP_SCHEMA_DEF_END(Flatten)

OP_SCHEMA_DEF(FlattenGrad)
OP_SCHEMA_DEF_END(FlattenGrad)

OP_SCHEMA_DEF(Floor)
OP_SCHEMA_DEF_END(Floor)

OP_SCHEMA_DEF(FloorDiv)
OP_SCHEMA_DEF_END(FloorDiv)

OP_SCHEMA_DEF(FloorMod)
OP_SCHEMA_DEF_END(FloorMod)

OP_SCHEMA_DEF(Fill)
OP_SCHEMA_DEF_END(Fill)

OP_SCHEMA_DEF(FullConnection)
OP_ATTR(has_bias, bool)
OP_ATTR(use_axis, bool)
OP_ATTR(axis, long)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(FullConnection)

OP_SCHEMA_DEF(FusedBatchNorm)
OP_ATTR_WITH_VALUE(epsilon, float, 0.0001)
OP_ATTR_WITH_VALUE(momentum, float, 0.9)
OP_ATTR(mode, long)
OP_SCHEMA_DEF_END(FusedBatchNorm)

OP_SCHEMA_DEF(Gather)
OP_SCHEMA_DEF_END(Gather)

OP_SCHEMA_DEF(GatherNd)
OP_SCHEMA_DEF_END(GatherNd)

OP_SCHEMA_DEF(Greater)
OP_SCHEMA_DEF_END(Greater)

OP_SCHEMA_DEF(GreaterEqual)
OP_SCHEMA_DEF_END(GreaterEqual)

OP_SCHEMA_DEF(HashtableLookup)
OP_SCHEMA_DEF_END(HashtableLookup)

OP_SCHEMA_DEF(InstanceNorm)
OP_ATTR(epsilon, float)
OP_SCHEMA_DEF_END(InstanceNorm)

OP_SCHEMA_DEF(LayerNormFusion)
OP_ATTR(begin_norm_axis, long)
OP_ATTR_WITH_VALUE(epsilon, float, 0.00001)
OP_ATTR(elementwise_affine, bool)
OP_ATTR(begin_params_axis, long)
OP_SCHEMA_DEF_END(LayerNormFusion)

OP_SCHEMA_DEF(LeakyRelu)
OP_ATTR(negative_slope, float)
OP_SCHEMA_DEF_END(LeakyRelu)

OP_SCHEMA_DEF(Less)
OP_SCHEMA_DEF_END(Less)

OP_SCHEMA_DEF(LessEqual)
OP_SCHEMA_DEF_END(LessEqual)

OP_SCHEMA_DEF(Log)
OP_SCHEMA_DEF_END(Log)

OP_SCHEMA_DEF(LogGrad)
OP_SCHEMA_DEF_END(LogGrad)

OP_SCHEMA_DEF(LogicalAnd)
OP_SCHEMA_DEF_END(LogicalAnd)

OP_SCHEMA_DEF(LogicalNot)
OP_SCHEMA_DEF_END(LogicalNot)

OP_SCHEMA_DEF(LogicalOr)
OP_SCHEMA_DEF_END(LogicalOr)

OP_SCHEMA_DEF(LpNormalization)
OP_ATTR(axis, long)
OP_ATTR(p, long)
OP_SCHEMA_DEF_END(LpNormalization)

OP_SCHEMA_DEF(LRN)
OP_ATTR(depth_radius, long)
OP_ATTR(bias, float)
OP_ATTR(alpha, float)
OP_ATTR(beta, float)
OP_ATTR(norm_region, string)
OP_SCHEMA_DEF_END(LRN)

OP_SCHEMA_DEF(LshProjection)
OP_ATTR_ENUM(type, LshProjectionType)
OP_SCHEMA_DEF_END(LshProjection)

OP_SCHEMA_DEF(LSTM)
OP_ATTR(bidirectional, bool)
OP_ATTR(has_bias, bool)
OP_ATTR(input_size, long)
OP_ATTR(hidden_size, long)
OP_ATTR(num_layers, long)
OP_ATTR(num_directions, long)
OP_ATTR(dropout, float)
OP_SCHEMA_DEF_END(LSTM)

OP_SCHEMA_DEF(L2NormalizeFusion)
OP_ATTR(axis, [long])
OP_ATTR(epsilon, float)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(L2NormalizeFusion)

OP_SCHEMA_DEF(MatMul)
OP_ATTR_WITH_VALUE(transpose_a, bool, false)
OP_ATTR_WITH_VALUE(transpose_b, bool, false)
OP_SCHEMA_DEF_END(MatMul)

OP_SCHEMA_DEF(Maximum)
OP_SCHEMA_DEF_END(Maximum)

OP_SCHEMA_DEF(MaximumGrad)
OP_ATTR(grad_x, bool)
OP_ATTR(grad_y, bool)
OP_SCHEMA_DEF_END(MaximumGrad)

OP_SCHEMA_DEF(MaxPoolFusion)
OP_ATTR(kernel_size, [long])
OP_ATTR(strides, [long])
OP_ATTR(pad, [long])
OP_ATTR_ENUM(pad_mode, PadMode)
OP_ATTR_ENUM(round_mode, RoundMode)
OP_ATTR_ENUM(format, Format)
OP_ATTR(global, bool)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(MaxPoolFusion)

OP_SCHEMA_DEF(Merge)
OP_SCHEMA_DEF_END(Merge)

OP_SCHEMA_DEF(Mfcc)
OP_ATTR(freq_upper_limit, float)
OP_ATTR(freq_lower_limit, float)
OP_ATTR(filter_bank_channel_num, long)
OP_ATTR(dct_coeff_num, long)
OP_SCHEMA_DEF_END(Mfcc)

OP_SCHEMA_DEF(Minimum)
OP_SCHEMA_DEF_END(Minimum)

OP_SCHEMA_DEF(MinimumGrad)
OP_ATTR(grad_x, bool)
OP_ATTR(grad_y, bool)
OP_SCHEMA_DEF_END(MinimumGrad)

OP_SCHEMA_DEF(Mod)
OP_SCHEMA_DEF_END(Mod)

OP_SCHEMA_DEF(MulFusion)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(MulFusion)

OP_SCHEMA_DEF(MulGrad)
OP_SCHEMA_DEF_END(MulGrad)

OP_SCHEMA_DEF(Neg)
OP_SCHEMA_DEF_END(Neg)

OP_SCHEMA_DEF(NegGrad)
OP_SCHEMA_DEF_END(NegGrad)

OP_SCHEMA_DEF(NotEqual)
OP_SCHEMA_DEF_END(NotEqual)

OP_SCHEMA_DEF(NonMaxSuppression)
OP_ATTR(center_point_box, long)
OP_SCHEMA_DEF_END(NonMaxSuppression)

OP_SCHEMA_DEF(OneHot)
OP_ATTR(axis, long)
OP_SCHEMA_DEF_END(OneHot)

OP_SCHEMA_DEF(OnesLike)
OP_SCHEMA_DEF_END(OnesLike)

OP_SCHEMA_DEF(PadFusion)
OP_ATTR_VEC2D(paddings, Vec2D);
OP_ATTR_ENUM(padding_mode, PaddingMode)
OP_ATTR(constant_value, float)
OP_SCHEMA_DEF_END(PadFusion)

OP_SCHEMA_DEF(PartialFusion)
OP_ATTR(sub_graph_index, long)
OP_SCHEMA_DEF_END(PartialFusion)

OP_SCHEMA_DEF(PoolingGrad)
OP_ATTR_ENUM_WITH_VALUE(format, Format, 0)
OP_ATTR_ENUM(pool_mode, PoolMode)
OP_ATTR(global, bool)
OP_ATTR(window, [long])
OP_ATTR(stride, [long])
OP_ATTR_ENUM(pad_mode, PadMode)
OP_ATTR(pad_list, [long])
OP_ATTR_ENUM(round_mode, RoundMode)
OP_SCHEMA_DEF_END(PoolingGrad)

OP_SCHEMA_DEF(PowerGrad)
OP_ATTR(power, float)
OP_ATTR(scale, float)
OP_ATTR(shift, float)
OP_SCHEMA_DEF_END(PowerGrad)

OP_SCHEMA_DEF(PowFusion)
OP_ATTR_WITH_VALUE(scale, float, 1)
OP_ATTR_WITH_VALUE(shift, float, 0)
OP_SCHEMA_DEF_END(PowFusion)

OP_SCHEMA_DEF(PriorBox)
OP_ATTR(min_sizes, [long])
OP_ATTR(max_sizes, [long])
OP_ATTR(aspect_ratios, [float])
OP_ATTR(variances, [float])
OP_ATTR(image_size_w, long)
OP_ATTR(image_size_h, long)
OP_ATTR(step_w, float)
OP_ATTR(step_h, float)
OP_ATTR(clip, bool)
OP_ATTR(flip, bool)
OP_ATTR(offset, float)
OP_SCHEMA_DEF_END(PriorBox)

OP_SCHEMA_DEF(PReLUFusion)
OP_ATTR(channel_shared, bool)
OP_SCHEMA_DEF_END(PReLUFusion)

OP_SCHEMA_DEF(Rank)
OP_SCHEMA_DEF_END(Rank)

OP_SCHEMA_DEF(Range)
OP_ATTR(d_type, long)
OP_ATTR(start, long)
OP_ATTR(limit, long)
OP_ATTR_WITH_VALUE(delta, long, 1)
OP_SCHEMA_DEF_END(Range)

OP_SCHEMA_DEF(Reciprocal)
OP_SCHEMA_DEF_END(Reciprocal)

OP_SCHEMA_DEF(RealDiv)
OP_SCHEMA_DEF_END(RealDiv)

OP_SCHEMA_DEF(ReduceFusion)
OP_ATTR(keep_dims, bool)
OP_ATTR_ENUM(mode, ReduceMode)
OP_ATTR(reduce_to_end, bool)
OP_ATTR(coeff, float)
OP_SCHEMA_DEF_END(ReduceFusion)

OP_SCHEMA_DEF(Reshape)
OP_SCHEMA_DEF_END(Reshape)

OP_SCHEMA_DEF(Resize)
OP_ATTR_ENUM_WITH_VALUE(format, Format, 0)
OP_ATTR_ENUM(method, ResizeMethod)
OP_ATTR(new_height, long)
OP_ATTR(new_width, long)
OP_ATTR_WITH_VALUE(preserve_aspect_ratio, bool, false)
OP_ATTR_ENUM(coordinate_transform_mode, CoordinateTransformMode)
OP_ATTR(cubic_coeff, float)
OP_ATTR(exclude_outside, long)
OP_ATTR(extrapolation_value, float)
OP_ATTR_ENUM(nearest_mode, NearestMode)
OP_SCHEMA_DEF_END(Resize)

OP_SCHEMA_DEF(ReverseSequence)
OP_ATTR(seq_dim, long)
OP_ATTR(batch_dim, long)
OP_SCHEMA_DEF_END(ReverseSequence)

OP_SCHEMA_DEF(ReverseV2)
OP_ATTR(axis, [long])
OP_SCHEMA_DEF_END(ReverseV2)

OP_SCHEMA_DEF(Rfft)
OP_ATTR(fft_length, long)
OP_SCHEMA_DEF_END(Rfft)

OP_SCHEMA_DEF(ROIPooling)
OP_ATTR(pooled_h, long)
OP_ATTR(pooled_w, long)
OP_ATTR(scale, float)
OP_SCHEMA_DEF_END(ROIPooling)

OP_SCHEMA_DEF(Round)
OP_SCHEMA_DEF_END(Round)

OP_SCHEMA_DEF(Rsqrt)
OP_SCHEMA_DEF_END(Rsqrt)

OP_SCHEMA_DEF(QuantDTypeCast)
OP_ATTR(src_t, long)
OP_ATTR(dst_t, long)
OP_SCHEMA_DEF_END(QuantDTypeCast)

OP_SCHEMA_DEF(ScaleFusion)
OP_ATTR(axis, long)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(ScaleFusion)

OP_SCHEMA_DEF(ScatterNd)
OP_SCHEMA_DEF_END(ScatterNd)

OP_SCHEMA_DEF(SGD)
OP_ATTR(nesterov, bool)
OP_ATTR(dampening, float)
OP_ATTR(weight_decay, float)
OP_SCHEMA_DEF_END(SGD)

OP_SCHEMA_DEF(Shape)
OP_SCHEMA_DEF_END(Shape)

OP_SCHEMA_DEF(SigmoidCrossEntropyWithLogits)
OP_SCHEMA_DEF_END(SigmoidCrossEntropyWithLogits)

OP_SCHEMA_DEF(SigmoidCrossEntropyWithLogitsGrad)
OP_SCHEMA_DEF_END(SigmoidCrossEntropyWithLogitsGrad)

OP_SCHEMA_DEF(Sin)
OP_SCHEMA_DEF_END(Sin)

OP_SCHEMA_DEF(SkipGram)
OP_ATTR(include_all_grams, bool)
OP_ATTR(max_skip_size, long)
OP_ATTR(ngram_size, long)
OP_SCHEMA_DEF_END(SkipGram)

OP_SCHEMA_DEF(SliceFusion)
OP_ATTR(axes, [long])
OP_SCHEMA_DEF_END(SliceFusion)

OP_SCHEMA_DEF(SmoothL1Loss)
OP_ATTR(beta, float)
OP_SCHEMA_DEF_END(SmoothL1Loss)

OP_SCHEMA_DEF(SmoothL1LossGrad)
OP_ATTR(beta, float)
OP_SCHEMA_DEF_END(SmoothL1LossGrad)

OP_SCHEMA_DEF(Softmax)
OP_ATTR(axis, [long])
OP_SCHEMA_DEF_END(Softmax)

OP_SCHEMA_DEF(SoftmaxCrossEntropyWithLogits)
OP_SCHEMA_DEF_END(SoftmaxCrossEntropyWithLogits)

OP_SCHEMA_DEF(SpaceToBatch)
OP_ATTR(block_size, [long])
OP_ATTR_VEC2D(paddings, Vec2D);
OP_SCHEMA_DEF_END(SpaceToBatch)

OP_SCHEMA_DEF(SpaceToBatchND)
OP_ATTR(block_shape, [long])
OP_ATTR_VEC2D(paddings, Vec2D);
OP_SCHEMA_DEF_END(SpaceToBatchND)

OP_SCHEMA_DEF(SpaceToDepth)
OP_ATTR(block_size, long)
OP_ATTR_ENUM(format, Format)
OP_SCHEMA_DEF_END(SpaceToDepth)

OP_SCHEMA_DEF(SparseSoftmaxCrossEntropy)
OP_ATTR(grad, bool)
OP_SCHEMA_DEF_END(SparseSoftmaxCrossEntropy)

OP_SCHEMA_DEF(SparseToDense)
OP_SCHEMA_DEF_END(SparseToDense)

OP_SCHEMA_DEF(Split)
OP_ATTR(output_num, long)
OP_ATTR(size_splits, [long])
OP_ATTR(axis, long)
OP_SCHEMA_DEF_END(Split)

OP_SCHEMA_DEF(Sqrt)
OP_SCHEMA_DEF_END(Sqrt)

OP_SCHEMA_DEF(Squeeze)
OP_ATTR(axis, [long])
OP_SCHEMA_DEF_END(Squeeze)

OP_SCHEMA_DEF(Square)
OP_SCHEMA_DEF_END(Square)

OP_SCHEMA_DEF(SquaredDifference)
OP_SCHEMA_DEF_END(SquaredDifference)

OP_SCHEMA_DEF(Stack)
OP_ATTR(axis, long)
OP_SCHEMA_DEF_END(Stack)

OP_SCHEMA_DEF(StridedSlice)
OP_ATTR(begin_mask, long)
OP_ATTR(end_mask, long)
OP_ATTR(ellipsis_mask, long)
OP_ATTR(new_axis_mask, long)
OP_ATTR(shrink_axis_mask, long)
OP_SCHEMA_DEF_END(StridedSlice)

OP_SCHEMA_DEF(SubFusion)
OP_ATTR_ENUM_WITH_VALUE(activation_type, ActivationType, 0)
OP_SCHEMA_DEF_END(SubFusion)

OP_SCHEMA_DEF(SubGrad)
OP_SCHEMA_DEF_END(SubGrad)

OP_SCHEMA_DEF(Switch)
OP_SCHEMA_DEF_END(Switch)

OP_SCHEMA_DEF(TensorListFromTensor)
OP_ATTR(element_dtype, long)
OP_ATTR(shape_type, long)
OP_SCHEMA_DEF_END(TensorListFromTensor)

OP_SCHEMA_DEF(TensorListGetItem)
OP_ATTR(element_dtype, long)
OP_SCHEMA_DEF_END(TensorListGetItem)

OP_SCHEMA_DEF(TensorListReserve)
OP_ATTR(element_dtype, long)
OP_ATTR(shape_type, long)
OP_SCHEMA_DEF_END(TensorListReserve)

OP_SCHEMA_DEF(TensorListSetItem)
OP_ATTR(element_dtype, long)
OP_SCHEMA_DEF_END(TensorListSetItem)

OP_SCHEMA_DEF(TensorListStack)
OP_ATTR(num_elements, long)
OP_ATTR(element_dtype, long)
OP_SCHEMA_DEF_END(TensorListStack)

OP_SCHEMA_DEF(TileFusion)
OP_ATTR(dims, [long])
OP_SCHEMA_DEF_END(TileFusion)

OP_SCHEMA_DEF(TopKFusion)
OP_ATTR_WITH_VALUE(sorted, bool, true)
OP_ATTR(axis, long)
OP_ATTR(largest, long)
OP_SCHEMA_DEF_END(TopKFusion)

OP_SCHEMA_DEF(Transpose)
OP_SCHEMA_DEF_END(Transpose)

OP_SCHEMA_DEF(Unique)
OP_SCHEMA_DEF_END(Unique)

OP_SCHEMA_DEF(UnsortedSegmentSum)
OP_SCHEMA_DEF_END(UnsortedSegmentSum)

OP_SCHEMA_DEF(Unsqueeze)
OP_ATTR(axis, [long])
OP_SCHEMA_DEF_END(Unsqueeze)

OP_SCHEMA_DEF(Unstack)
OP_ATTR_WITH_VALUE(axis, long, 0)
OP_SCHEMA_DEF_END(Unstack)

OP_SCHEMA_DEF(While)
OP_ATTR(cond_subgraph_index, long)
OP_ATTR(body_subgraph_index, long)
OP_SCHEMA_DEF_END(While)

OP_SCHEMA_DEF(Where)
OP_SCHEMA_DEF_END(Where)

OP_SCHEMA_DEF(ZerosLike)
OP_SCHEMA_DEF_END(ZerosLike)
