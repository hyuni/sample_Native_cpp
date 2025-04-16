package com.example.counterlibrary;

public class CounterNative {
    static {
        System.loadLibrary("counter");
    }

    // 네이티브 메소드 선언
    public native void initCounter();
    public native int getCounterValue();
    public native void incrementCounter(); 
    public native void decrementCounter();
    public native void setCounterValue(int value);
}
