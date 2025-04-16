#include <jni.h>
#include "counter.h"

extern "C" {

JNIEXPORT void JNICALL
Java_com_example_counterlibrary_CounterNative_initCounter(JNIEnv *env, jobject thiz) {
    initCounter();
}

JNIEXPORT jint JNICALL
Java_com_example_counterlibrary_CounterNative_getCounterValue(JNIEnv *env, jobject thiz) {
    return getCounterValue();
}

JNIEXPORT void JNICALL
Java_com_example_counterlibrary_CounterNative_incrementCounter(JNIEnv *env, jobject thiz) {
    incrementCounter();
}

JNIEXPORT void JNICALL
Java_com_example_counterlibrary_CounterNative_decrementCounter(JNIEnv *env, jobject thiz) {
    decrementCounter();
}

JNIEXPORT void JNICALL
Java_com_example_counterlibrary_CounterNative_setCounterValue(JNIEnv *env, jobject thiz, jint value) {
    setCounterValue(value);
}

}
