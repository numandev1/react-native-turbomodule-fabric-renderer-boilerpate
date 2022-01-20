package com.reactnativeturbomodulefabricrendererboilerpate;
import androidx.annotation.NonNull;

import com.example.samplelibrary.MyApplicationLibrarySpec;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
public class NativeAwesomeManager extends MyApplicationLibrarySpec {
    public static final String NAME = "NativeAwesomeManager";

    public NativeAwesomeManager(ReactApplicationContext reactContext) {
        super(reactContext);
    }

    @Override
    public void getString(String id, Promise promise) {
        promise.resolve("test " + id + NAME);
    }

    @NonNull
    public String getName() {
        return NAME;
    }
}
