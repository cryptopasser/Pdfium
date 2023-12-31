// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BASE_MEMORY_PTR_UTIL_H_
#define THIRD_PARTY_BASE_MEMORY_PTR_UTIL_H_

#include <memory>

namespace pdfium {

// Helper to transfer ownership of a raw pointer to a std::unique_ptr<T>.
// Note that std::unique_ptr<T> has very different semantics from
// std::unique_ptr<T[]>: do not use this helper for array allocations.
template <typename T>
std::unique_ptr<T> WrapUnique(T* ptr) {
  return std::unique_ptr<T>(ptr);
}

}  // namespace pdfium

#endif  // THIRD_PARTY_BASE_MEMORY_PTR_UTIL_H_
