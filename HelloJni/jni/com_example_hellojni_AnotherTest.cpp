#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
//#include <Windows.h>
#include <jni.h>
//#include "com_example_hellojni_Test.h"
#include "log.h"
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



/*
 * Class:     com_example_hellojni_AnotherTest
 * Method:    GetBasicTypes
 * Signature: (Z[BCIJFD)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_hellojni_AnotherTest_GetBasicTypes
  (JNIEnv *env , jobject o, jboolean bl, jbyteArray arry, jchar chr, jint in, jlong jl, jfloat jf, jdouble jd)
{
	LOGI("bl = %d\n", bl);
	jint loop = 0;
//	for(loop = 0; loop < 5; loop++)
//	{
//		LOGI("chr = %d" , arry[loop]);
//	}
//	LOGI("arry =  %s", arry);

	LOGI("in = %d" , in);
	LOGI("jl = %l" , jl);
	LOGI("jf = %f" , jf);
	LOGI("jd = %d" , jd);

    return env->NewStringUTF("i am cpp files,Java_com_example_hellojni_AnotherTest_GetBasicTypes!!");

}

