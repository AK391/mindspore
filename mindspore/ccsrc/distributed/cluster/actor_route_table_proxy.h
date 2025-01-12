/**
 * Copyright 2022 Huawei Technologies Co., Ltd
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

#ifndef MINDSPORE_CCSRC_DISTRIBUTED_CLUSTER_ACTOR_ROUTE_TABLE_PROXY_H_
#define MINDSPORE_CCSRC_DISTRIBUTED_CLUSTER_ACTOR_ROUTE_TABLE_PROXY_H_

#include <string>
#include <memory>
#include "proto/comm.pb.h"
#include "ps/core/node.h"
#include "distributed/constants.h"

namespace mindspore {
namespace distributed {
namespace cluster {
using ps::core::ActorAddress;
// Actor route table proxy for nodes like workers and server. This class helps update actor route table in scheduler
// across the network.
class ActorRouteTableProxy {
 public:
  explicit ActorRouteTableProxy(const std::shared_ptr<ps::core::Node> &node) : node_(node) {}
  ~ActorRouteTableProxy() = default;

  // Register actor address to the route table stored in scheduler.
  bool RegisterRoute(const std::string &actor_id, const ActorAddress &actor_addr);

  // Delete the actor address of the specified actor_id from the route table stored in scheduler.
  bool DeleteRoute(const std::string &actor_id);

  // Get the actor address for the specified actor_id from the route table stored in scheduler.
  ActorAddress LookupRoute(const std::string &actor_id) const;

 private:
  // The node variable helps proxy to communicate with scheduler, e.g., SendMessage.
  std::shared_ptr<ps::core::Node> node_;
};
}  // namespace cluster
}  // namespace distributed
}  // namespace mindspore
#endif  // MINDSPORE_CCSRC_DISTRIBUTED_CLUSTER_ACTOR_ROUTE_TABLE_PROXY_H_
