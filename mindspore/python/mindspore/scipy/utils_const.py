# Copyright 2022 Huawei Technologies Co., Ltd
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
"""internal graph-compatible utility functions"""
from collections.abc import Iterable
from ..ops.primitive import constexpr
from .._c_expression import typing


@constexpr
def _callable_const(x):
    """Returns true if x is a function in graph mode."""
    return isinstance(x, typing.Function)


@constexpr
def _type_convert(new_type, obj):
    """
    Convert type of `obj` to `force`.
    """
    return new_type(obj)


@constexpr
def _raise_value_error(info, *param):
    """
    Raise ValueError in both graph/pynative mode

    Args:
        info(str): info string to display
        param(tuple): any object that can be recognized by graph mode. All
            param's value will be appended to info. Default is an empty tuple.
    """
    for p in param:
        info = info + f"{p}"
    raise ValueError(info)


@constexpr
def _raise_type_error(info, *param):
    """
    Raise TypeError in both graph/pynative mode

    Args:
        info(str): info string to display
        param(tuple): any object that can be recognized by graph mode. All
            param's value will be appended to info. Default is an empty tuple.
    """
    for p in param:
        info = info + f"{p}"
    raise TypeError(info)


@constexpr
def _type_check(arg_name, arg_value, valid_types, prim_name=None):
    """
    Checks whether a value is instance of some types.
    The same as mindspore._checkparam.Validator.check_value_type.
    This copy is to make it work in graph mode.
    """
    valid_types = valid_types if isinstance(valid_types, Iterable) else (valid_types,)

    def raise_error_msg():
        """func for raising error message when check failed"""
        type_names = [t.__name__ if hasattr(t, '__name__') else str(t) for t in valid_types]
        num_types = len(valid_types)
        msg_prefix = f"For '{prim_name}', the" if prim_name else "The"
        raise TypeError(f'{msg_prefix} type of `{arg_name}` should be {"one of " if num_types > 1 else ""}'
                        f'{type_names if num_types > 1 else type_names[0]}, '
                        f'but got \'{arg_value}\' with type {type(arg_value).__name__}.')

    # Notice: bool is subclass of int, so `check_value_type('x', True, [int])` will check fail, and
    #         `check_value_type('x', True, [bool, int])` will check pass
    if isinstance(arg_value, bool) and bool not in tuple(valid_types):
        raise_error_msg()
    if not isinstance(arg_value, tuple(valid_types)):
        raise_error_msg()
    return arg_value
