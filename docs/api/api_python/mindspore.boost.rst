mindspore.boost
==============================

Boost能够自动加速网络，如减少BN/梯度冻结/累积梯度等。

注：此特性为测试版本，我们仍在改进其功能。

.. py:class:: mindspore.boost.AdaSum(rank, device_number, group_number, parameter_tuple)

    Adaptive Summation(AdaSum)是一种优化深度学习模型并行训练的算法，它可以提升不同规模集群训练的精度，减小不同规模集群调参难度。

    **参数：**

    - **network** (Cell) – 训练网络，当前网络只支持单个输出。
    - **optimizer** (Union[Cell]) – 用于更新权重的优化器。
    - **sens** (numbers.Number) – 作为反向传播输入要填充的缩放数，默认值为1.0。

    **输入：**

    - **delta_weights** (Tuple(Tensor)) – 梯度tuple。
    - **parameters** (Tuple(Parameter)) – 当前权重组成的元组。
    - **old_parameters** (Tuple(Parameter)) – 旧的权重组成的元组。

    **输出：**

    Tuple(Tensor), adasum处理后更新的权重。

.. py:class:: mindspore.boost.AutoBoost(level="O0", boost_config_dict="")

    MindSpore自动优化算法库。

    **参数：**

    - **level** (str) – Boost的配置级别。
    - **boost_config_dict** (dict) – 用户可配置的超参字典，建议的格式如下：

      .. code-block::

          {
              "boost": {
                  "mode": "auto",
                  "less_bn": False,
                  "grad_freeze": False,
                  "adasum": False,
                  "grad_accumulation": False,
                  "dim_reduce": False},

              "common": {
                  "gradient_split_groups": [50, 100],
                  "device_number": 8},

              "less_bn": {
                  "fn_flag": True,
                  "gc_flag": True},

              "grad_freeze": {
                  "param_groups": 10,
                  "freeze_type": 1,
                  "freeze_p": 0.7,
                  "total_steps": 65536},

              "grad_accumulation": {
                  "grad_accumulation_step": 1},

              "dim_reduce": {
                  "rho": 0.55,
                  "gamma": 0.9,
                  "alpha": 0.001,
                  "sigma": 0.4,
                  "n_components": 32,
                  "pca_mat_path": None,
                  "weight_load_dir": None,
                  "timeout": 1800}

          }

    **异常：**

    - **Valuerror** – Boost的模式不在["auto", "manual", "enable_all", "disable_all"]这个列表中。

    .. py:method:: network_auto_process_train()
    
        使用Boost算法训练。
    
        **返回：**
    
        - network (Cell)，训练网络。
        - optimizer (Union[Cell])，用于更新权重的优化器。
    
    .. py:method:: network_auto_process_eval()
    
        使用Boost算法推理。
    
        **返回：**
    
        network(Cell)，推理网络。

.. py:class:: mindspore.boost.BoostTrainOneStepCell(network, optimizer, sens=1.0)

    Boost网络训练封装类,.

    用优化器封装网络，使用输入训练网络来获取结果。反向图在*construct*函数中自动创建，并且支持多种不同的并行模式。


    **参数：**

    - **network** (Cell) – 训练网络，当前网络只支持单个输出。
    - **optimizer** (Union[Cell]) – 用于更新权重的优化器。
    - **sens** (numbers.Number) – 作为反向传播输入要填充的缩放数，默认值为1.0。

    **输入：**

    - **inputs** (Tuple(Tensor)) – 网络的所有输入组成的元组。

    **输出：**

    - loss (Tensor)，标量Tensor。
    - overflow (Tensor)，标量Tensor，类型为bool。
    - loss scaling value (Tensor)，标量Tensor。

    **异常：**

    - **Typerror** – 如果*sens*不是一个数字。

    .. py:method:: gradient_freeze_process(*inputs)
    
        使用梯度冻结算法训练。
    
        **返回：**
    
        number，网络训练过程中得到的loss值。
    
    .. py:method:: gradient_accumulation_process(loss, grads, sens, *inputs)
    
        使用梯度累积算法训练。
    
        **返回：**
    
        number，网络训练过程中得到的loss值。
    
    .. py:method:: adasum_process(loss, grads)
    
        使用Adasum算法训练。
    
        **返回：**
    
        number，网络训练过程中得到的loss值。
    
    .. py:method:: check_adasum_enable()
    
        Adasum算法仅在多卡或者多机场景生效，并且要求卡数符合2的n次方，该函数用来判断adasum算法能否生效。
    
        **返回：**
    
        enable_adasum (bool)，Adasum算法是否生效。
    
    .. py:method:: check_dim_reduce_enable()
    
        使用降维二阶训练算法训练。
    
        **返回：**
    
        enable_dim_reduce (bool)，降维二阶训练算法是否生效。

.. py:class:: mindspore.boost.GradientFreeze(param_groups, freeze_type, freeze_p, total_steps)

    梯度冻结算法，根据指定策略随机冻结某些层的梯度，来提升网络训练性能。
    冻结的层数和冻结的概率均可由用户配置。

    **参数：**

    - **param_groups** (Union[tuple, list]) – 梯度冻结训练的权重。
    - **freeze_type** (int) – 梯度冻结训练的策略。
    - **freeze_p** (float) – 梯度冻结训练的概率。
    - **total_steps** (numbers.Number) – 整个训练过程的总的步数。

    .. py:method:: freeze_generate(network, optimizer)
    
        生成梯度冻结的网络与优化器。
    
        **参数：**
    
        - **network** (Cell) – 训练网络。
        - **optimizer** (Union[Cell]) – 用于更新权重的优化器。
    
    .. py:method:: generate_freeze_index_sequence(parameter_groups_number, freeze_strategy, freeze_p, total_steps)
    
        生成梯度冻结每一步需要冻结的层数。
    
        **参数：**
    
        - **parameter_groups_number** (numbers.Number) – 梯度冻结训练的权重个数。
        - **freeze_strategy** (int) – 梯度冻结训练的策略。
        - **freeze_p** (float) – 梯度冻结训练的概率。
        - **total_steps** (numbers.Number) – 整个训练过程的总的步数。
    
    .. py:method:: split_parameters_groups(net, freeze_para_groups_number)
    
        拆分用于梯度冻结训练的权重。
    
        **参数：**
    
        - **net** (Cell) – 训练网络。
        - **freeze_para_groups_number** (numbers.Number) – 梯度冻结训练的权重个数。

.. py:class:: mindspore.boost.FreezeOpt(opt, train_parameter_groups=None, train_strategy=None)

    支持梯度冻结训练的优化器。

    **参数：**

    - **opt** (Cell) – 非冻结优化器实例，如*Momentum*，*SGD*。
    - **train_parameter_groups** (Union[tuple, list]) – 梯度冻结训练的权重。
    - **train_strategy** (Union[tuple(int), list(int), Tensor]) – 梯度冻结训练的策略。

.. py:class:: mindspore.boost.GradientAccumulation(max_accumulation_step, optimizer)

    梯度累积算法，在累积多个step的梯度之后，再用来更新网络权重，可以提高训练效率。

    **参数：**

    - **max_accumulation_step** (int) – 累积梯度的步数。
    - **optimizer** (Cell) – 网络训练使用的优化器。

.. py:class:: mindspore.boost.LessBN(network, fn_flag=False)

    LessBN算法，可以在不损失网络精度的前提下，自动减少网络中批归一化（Batch Normalization）的数量，来提升网络性能。

    **参数：**

    - **network** (Cell) – 待训练的网络模型。
    - **fn_flag** (bool) – 是否将网络中最后一个全连接层替换为全归一化层。默认值：False。

.. automodule:: mindspore.boost
    :members:
