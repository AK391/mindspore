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

#ifndef MINDSPORE_CORE_MINDRT_RUNTIME_INTER_THREADPOOL_H_
#define MINDSPORE_CORE_MINDRT_RUNTIME_INTER_THREADPOOL_H_

#include <queue>
#include <mutex>
#include <atomic>
#include <condition_variable>
#include "thread/threadpool.h"
#include "actor/actor.h"

namespace mindspore {
class InterThreadPool : public ThreadPool {
 public:
  // create ThreadPool that contains actor thread and kernel thread
  static InterThreadPool *CreateThreadPool(size_t actor_thread_num, size_t all_thread_num);
  // create ThreadPool that contains only actor thread
  static InterThreadPool *CreateThreadPool(size_t thread_num);
  ~InterThreadPool() override;

  void EnqueReadyActor(const ActorReference &actor);

 private:
  int CreateThreads(size_t actor_thread_num, size_t all_thread_num);

  void AsyncRunMultiTask(Worker *worker);

  bool RunPoolQueueActorTask(Worker *worker);

  bool PopActorFromQueue(ActorBase **actor);

  size_t actor_thread_num_{0};

  std::mutex actor_mutex_;
  std::queue<ActorReference> actor_queue_;
};
}  // namespace mindspore
#endif  // MINDSPORE_CORE_MINDRT_RUNTIME_INTER_THREADPOOL_H_
