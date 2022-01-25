package com.reactnativeturbomodulefabricrendererboilerpate;

import com.facebook.jni.HybridData;
import com.facebook.react.ReactPackage;
import com.facebook.react.ReactPackageTurboModuleManagerDelegate;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.soloader.SoLoader;

import java.util.List;

public class MyApplicationTurboModuleManagerDelegate extends ReactPackageTurboModuleManagerDelegate {

    private static volatile boolean sIsSoLibraryLoaded;

    protected MyApplicationTurboModuleManagerDelegate(ReactApplicationContext reactApplicationContext, List<ReactPackage> packages) {
        super(reactApplicationContext, packages);
    }

    protected native HybridData initHybrid();

    native boolean canCreateTurboModule(String moduleName);

    public static class Builder extends ReactPackageTurboModuleManagerDelegate.Builder {
        protected MyApplicationTurboModuleManagerDelegate build(
                ReactApplicationContext context, List<ReactPackage> packages) {
            return new MyApplicationTurboModuleManagerDelegate(context, packages);
        }
    }

    @Override
    protected synchronized void maybeLoadOtherSoLibraries() {
        // Prevents issues with initializer interruptions.
        if (!sIsSoLibraryLoaded) {
            SoLoader.loadLibrary("samplelibrary");
            sIsSoLibraryLoaded = true;
        }
    }
}