#pragma once

#include <memory>
#include <string>

#include <ReactCommon/TurboModule.h>

namespace facebook {
namespace react {

// TODO: This definition should be codegen'ed for type-safety purpose.
class JSI_EXPORT MyApplicationTurboCxxModuleSpecJSI : public TurboModule {
 protected:
  MyApplicationTurboCxxModuleSpecJSI(std::shared_ptr<CallInvoker> jsInvoker);

 public:
  virtual jsi::String getString(jsi::Runtime &rt, const jsi::String &arg) = 0;
  virtual jsi::Object getConstants(jsi::Runtime &rt) = 0;
};

} // namespace react
} // namespace facebook
