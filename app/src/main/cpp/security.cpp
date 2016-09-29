//
// Created by appdevzhang on 16/9/29.
//
#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_appdevzhang_cmakendksimple_MainActivity_getSecretSign(
        JNIEnv *env,
        jobject /* this */) {
    std::string secret = "secret";
    return env->NewStringUTF(secret.c_str());
}
