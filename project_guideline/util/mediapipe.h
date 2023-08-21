// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef PROJECT_GUIDELINE_UTIL_MEDIAPIPE_H_
#define PROJECT_GUIDELINE_UTIL_MEDIAPIPE_H_

#include <string>

#include "absl/status/statusor.h"
#include "mediapipe/framework/formats/image_frame.h"
#include "project_guideline/util/image.h"

namespace guideline::util {

absl::StatusOr<mediapipe::ImageFrame> LoadImageFrame(
    const std::string& file_path);

absl::StatusOr<mediapipe::ImageFrame> LoadFloatImageFrame(
    const std::string& file_path);

Image CopyImageFrameToImage(const mediapipe::ImageFrame& frame);

mediapipe::ImageFrame CopyImageToImageFrame(const Image& image);

}  // namespace guideline::util

#endif  // PROJECT_GUIDELINE_UTIL_MEDIAPIPE_H_
