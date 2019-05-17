// Copyright 2019 The MACE Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MACEKIT_INCLUDE_TYPE_H_
#define MACEKIT_INCLUDE_TYPE_H_

enum DeviceType { CPU = 0, GPU = 2, HEXAGON = 3, HTA = 4 };

enum CPUAffinityPolicy {
  AFFINITY_NONE = 0,
  AFFINITY_BIG_ONLY = 1,
  AFFINITY_LITTLE_ONLY = 2,
  AFFINITY_HIGH_PERFORMANCE = 3,
  AFFINITY_POWER_SAVE = 4,
};

#endif  // MACEKIT_INCLUDE_TYPE_H_