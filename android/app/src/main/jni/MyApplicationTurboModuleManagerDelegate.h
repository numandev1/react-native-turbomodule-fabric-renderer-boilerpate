#include <memory>
#include <string>

#include <ReactCommon/TurboModuleManagerDelegate.h>
#include <fbjni/fbjni.h>

namespace facebook {
namespace react {

class MyApplicationTurboModuleManagerDelegate
    : public jni::HybridClass<
          MyApplicationTurboModuleManagerDelegate,
          TurboModuleManagerDelegate> {
 public:
  static constexpr auto kJavaDescriptor =
      "Lcom/reactnativeturbomodulefabricrendererboilerpate/MyApplicationTurboModuleManagerDelegate;";

  static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject>);

  static void registerNatives();

  std::shared_ptr<TurboModule> getTurboModule(
      const std::string name,
      const std::shared_ptr<CallInvoker> jsInvoker) override;
  std::shared_ptr<TurboModule> getTurboModule(
      const std::string name,
      const JavaTurboModule::InitParams &params) override;

  /**
   * Test-only method. Allows user to verify whether a TurboModule can be
   * created by instances of this class.
   */
  bool canCreateTurboModule(std::string name);

 private:
  friend HybridBase;
  using HybridBase::HybridBase;
};

} // namespace react
} // namespace facebook
