#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_cn_johnson_com_loadh5cssdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
