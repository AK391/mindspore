#!/bin/bash
# Copyright 2021 Huawei Technologies Co., Ltd
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ============================================================================

if [ $# != 3 ]
then
    echo "Usage: sh run_standalone_train_ascend.sh [CKPTS_DIR] [DATA_PATH] [DEVICE_ID]"
exit 1
fi

export CKPTS_DIR=$1
export DATA_PATH=$2
export DEVICE_ID=$3

python eval.py --ckpts_dir=$CKPTS_DIR --data_path=$DATA_PATH \
               --device_id=$DEVICE_ID --device_target="Ascend" > log 2>&1 &
