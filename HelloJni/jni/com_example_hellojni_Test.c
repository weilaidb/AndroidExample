#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
//#include <Windows.h>
#include <jni.h>
#include "com_example_hellojni_Test.h"

static char s_string[] = "My god, I did it!\n";


/*
 * Class:     com_example_hellojni_Test
 * Method:    test
 * Signature: ()Ljava/lang/String;
 */
jstring Java_com_example_hellojni_Test_test
  (JNIEnv *env, jobject thiz)
{
	LOGI("MyJNI is called!\n");
	LOGI("Java_com_example_hellojni_Test_test is called!\n");
//	LOGI(s_string);
    return (*env)->NewStringUTF(env, "i am test function!!,realize the auto combine of jni!!!!, i love you ,my baby!!");
}
