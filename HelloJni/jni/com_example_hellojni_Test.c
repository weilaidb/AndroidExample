#include <string.h>
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
    return (*env)->NewStringUTF(env, "i am test function!!,so goodthings!!");
}
