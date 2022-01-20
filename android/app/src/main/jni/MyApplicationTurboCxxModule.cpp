#include "MyApplicationTurboCxxModule.h"

#include <ReactCommon/TurboModuleUtils.h>

using namespace facebook;

namespace facebook {
namespace react {

MyApplicationTurboCxxModule::MyApplicationTurboCxxModule(
    std::shared_ptr<CallInvoker> jsInvoker)
    : MyApplicationTurboCxxModuleSpecJSI(jsInvoker) {}

jsi::String MyApplicationTurboCxxModule::getString(
    jsi::Runtime &rt,
    const jsi::String &arg) {
  return jsi::String::createFromUtf8(rt, arg.utf8(rt));
}

jsi::Object MyApplicationTurboCxxModule::getConstants(jsi::Runtime &rt) {
  // Note: return type isn't type-safe.
  jsi::Object result(rt);
  result.setProperty(rt, "const1", jsi::Value(true));
  result.setProperty(rt, "const2", jsi::Value(375));
  result.setProperty(
      rt, "const3", jsi::String::createFromUtf8(rt, "something"));
  return result;
}

} // namespace react
} // namespace facebook
