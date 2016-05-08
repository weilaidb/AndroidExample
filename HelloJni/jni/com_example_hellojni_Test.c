#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
//#include <Windows.h>
#include <jni.h>
//#include "com_example_hellojni_Test.h"


/*
 * Class:     com_example_hellojni_Test
 * Method:    test
 * Signature: ()Ljava/lang/String;
 */
jstring Java_com_example_hellojni_Test_test
  (JNIEnv *env, jobject thiz)
{
    return (*env)->NewStringUTF(env, "i am test function!!,realize the auto combine of jni!!!!");
}
