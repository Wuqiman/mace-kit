// Copyright 2019 The MACE-KIT Authors. All Rights Reserved.
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

#ifndef SRC_OBJECT_DETECTION_OBJECT_DETECTION_IMPL_H_
#define SRC_OBJECT_DETECTION_OBJECT_DETECTION_IMPL_H_

#include<map>
#include<memory>
#include<string>

#include "macekit/object_detection.h"
#include "mace/public/mace.h"
#include "src/util/ssd_bbox.h"

namespace mace_kit {

class ObjectDetectionImpl : public ObjectDetection {
 public:
  explicit ObjectDetectionImpl(const ObjectDetectionContext &context);
  ObjectDetectionImpl(const ObjectDetectionImpl&) = delete;
  ObjectDetectionImpl& operator=(const ObjectDetectionImpl&) = delete;
  ~ObjectDetectionImpl() override = default;
  Status Detect(Mat *mat, int max_object_count, ObjectResult *result) override;

 private:
  std::shared_ptr<mace::MaceEngine> mace_engine_;
  std::shared_ptr<float> mace_input_buffer_;
  std::map<std::string, mace::MaceTensor> mace_output_tensors_;
  util::SSDBbox ssd_bbox;
};

}  // namespace mace_kit

#endif  // SRC_OBJECT_DETECTION_OBJECT_DETECTION_IMPL_H_
