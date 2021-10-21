// Copyright (c) 2021 Google LLC.
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

#ifndef SOURCE_DIFF_DIFF_H_
#define SOURCE_DIFF_DIFF_H_

#include "source/opt/ir_context.h"

namespace spvtools {
namespace diff {

enum Options {
  OPTION_NONE = 0,
  OPTION_IGNORE_SET_BINDING = 1 << 0,
  OPTION_IGNORE_LOCATION = 1 << 1,
  OPTION_INDENT = 1 << 2,
  OPTION_NO_HEADER = 1 << 3,
  OPTION_COLOR = 1 << 4,
  OPTION_DUMP_ID_MAP = 1 << 5,
};

void Diff(const opt::Module* src, const opt::Module* dst, uint32_t options);

}  // namespace diff
}  // namespace spvtools

#endif  // SOURCE_DIFF_DIFF_H_
