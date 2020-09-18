//===- device_placement.h -------------------------------------------------===//
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

#ifndef HALO_LIB_TRANSFORMS_DEVICE_PLACEMENT_H_
#define HALO_LIB_TRANSFORMS_DEVICE_PLACEMENT_H_

#include "halo/lib/pass/pass.h"

namespace halo {

/// This pass eliminates dead IRs.
class DevicePlacement final : public FunctionPass {
 public:
  DevicePlacement() : FunctionPass("Assign function to devices") {}

  bool RunOnFunction(Function* func) override;
};

} // end namespace halo.

#endif // HALO_LIB_TRANSFORMS_DEVICE_PLACEMENT_H_