//===- reorder_channel.h --------------------------------------------------===//
//
// Copyright (C) 2019-2020 Alibaba Group Holding Limited.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// =============================================================================

#ifndef HALO_LIB_TRANSFORMS_REORDER_CHANNEL_H_
#define HALO_LIB_TRANSFORMS_REORDER_CHANNEL_H_

#include "halo/lib/pass/pass.h"

namespace halo {

/// This pass attemps to reorder the channel dimension of ops.
class ReorderChannel final : public BasicBlockPass {
 public:
  enum class ChannelOrder {
    None,
    ChannelFirst,
    ChannelLast,
  };

  ReorderChannel(bool channel_first)
      : BasicBlockPass("Data Format"), channel_first_(channel_first) {}

  bool RunOnBasicBlock(BasicBlock* bb) override;

 private:
  bool channel_first_;
};

} // end namespace halo.

#endif // HALO_LIB_TRANSFORMS_REORDER_CHANNEL_H_