# REACT NATIVE TURBOMODULE FABRIC RENDERER BOILERPATE
This is BOILERPATE template for enable turbomodule and fabric renderer


# Generate Codegen native files
## IOS
```
cd ios && USE_FABRIC=1 RCT_NEW_ARCH_ENABLED=1 pod install
```

## Android
```
cd android && ./gradlew assembleDebug
```

[React Native New Architecture Intro Docs](https://deploy-preview-2879--react-native.netlify.app/docs/next/new-architecture-intro)

[Docs PR](https://github.com/facebook/react-native-website/pull/2879)
