/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <memory>

#include "MyApplicationTurboCxxModuleSpecJSI.h"

namespace facebook {
namespace react {

/**
 * A MyApplication implementation of the C++ spec. In practice, this class can just
 * extend jsi::HostObject directly, but using the spec provides build-time
 * type-safety.
 */
class MyApplicationTurboCxxModule : public MyApplicationTurboCxxModuleSpecJSI {
 public:
  MyApplicationTurboCxxModule(std::shared_ptr<CallInvoker> jsInvoker);
  jsi::String getString(jsi::Runtime &rt, const jsi::String &arg) override;
  jsi::Object getConstants(jsi::Runtime &rt) override;
};

} // namespace react
} // namespace facebook
