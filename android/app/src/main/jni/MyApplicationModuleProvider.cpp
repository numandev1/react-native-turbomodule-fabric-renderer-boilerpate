#include "MyApplicationModuleProvider.h"

#include <rncore.h>
#include <samplelibrary.h>

namespace facebook {
namespace react {

std::shared_ptr<TurboModule> MyApplicationModuleProvider(const std::string moduleName, const JavaTurboModule::InitParams &params) {
    auto module = samplelibrary_ModuleProvider(moduleName, params);
    if (module != nullptr) {
      return module;
    }

    return rncore_ModuleProvider(moduleName, params);
}

} // namespace react
} // namespace facebook
