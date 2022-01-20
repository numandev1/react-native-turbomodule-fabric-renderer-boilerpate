#include "MyApplicationTurboCxxModuleSpecJSI.h"

// NOTE: This entire file should be codegen'ed.

namespace facebook {
namespace react {

static jsi::Value __hostFunction_MyApplicationTurboCxxModuleSpecJSI_getString(
    jsi::Runtime &rt,
    TurboModule &turboModule,
    const jsi::Value *args,
    size_t count) {
  return static_cast<MyApplicationTurboCxxModuleSpecJSI *>(&turboModule)
      ->getString(rt, args[0].getString(rt));
}

static jsi::Value __hostFunction_MyApplicationTurboCxxModuleSpecJSI_getConstants(
    jsi::Runtime &rt,
    TurboModule &turboModule,
    const jsi::Value *args,
    size_t count) {
  return static_cast<MyApplicationTurboCxxModuleSpecJSI *>(&turboModule)
      ->getConstants(rt);
}

MyApplicationTurboCxxModuleSpecJSI::MyApplicationTurboCxxModuleSpecJSI(
    std::shared_ptr<CallInvoker> jsInvoker)
    : TurboModule("MyApplicationTurboCxxModule", jsInvoker) {
  methodMap_["getString"] = MethodMetadata{
      1, __hostFunction_MyApplicationTurboCxxModuleSpecJSI_getString};
  methodMap_["getConstants"] = MethodMetadata{
      0, __hostFunction_MyApplicationTurboCxxModuleSpecJSI_getConstants};
}

} // namespace react
} // namespace facebook
