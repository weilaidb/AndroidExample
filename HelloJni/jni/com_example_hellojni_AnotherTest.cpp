#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
//#include <Windows.h>
#include <jni.h>
#include "com_example_hellojni_Test.h"
#include "com_example_hellojni_AnotherTest.h"

/*
 * Class:     com_example_hellojni_AnotherTest
 * Method:    GetWater
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_hellojni_AnotherTest_GetWater
  (JNIEnv *env , jobject o )
{
	LOGI("MyJNI is called,at cpp files!\n");
	LOGI("Java_com_example_hellojni_AnotherTest_GetWater is called!\n");
//	LOGI(s_string);
    return env->NewStringUTF("i am cpp files,i am so happy to to it!!");


}
