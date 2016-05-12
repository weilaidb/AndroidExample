#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
//#include <Windows.h>
#include <jni.h>
#include "log.h"
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

	jstring javaString;
	javaString = (*env)->NewStringUTF(env, "so good things");
//	LOGI(javaString);


	const jbyte* str;
	jboolean isCopy;
	//获取字符串内容
	str = (*env)->GetStringUTFChars(env, javaString, &isCopy);
	if(0 != str)
	{
		LOGI("Java string: %s", str);

		if(JNI_TRUE ==  isCopy)
		{
			LOGI("C string is a copy of the Java string.\n");
		}
		else
		{
			LOGI("C string points to actual string.");
		}
		//释放字符串
		(*env)->ReleaseStringUTFChars(env, javaString, str);
	}



	//数组
	jintArray javaArray;
	javaArray = (*env)->NewIntArray(env,10);
	if( 0 != javaArray)
	{
		//
		jint nativeArray[10];
		nativeArray[0] = 1;
		nativeArray[1] = 1;
		nativeArray[2] = 1;
		nativeArray[3] = 1;
		nativeArray[4] = 1;
		nativeArray[5] = 1;

		(*env)->GetIntArrayRegion(env, javaArray,0,10,nativeArray);

		(*env)->SetIntArrayRegion(env, javaArray,0,10,nativeArray);




		//另一种访问方式
		jint * nativeDirectArray;
		jboolean isCopy;
		nativeDirectArray = (*env)->GetIntArrayElements(env, javaArray, &isCopy);
		if(JNI_TRUE ==  isCopy)
		{
			LOGI("C int array is a copy of the Java intArray.\n");
		}
		else
		{
			LOGI("C int array points to actual intArray.");
		}

		(*env)->ReleaseIntArrayElements(env,javaArray,nativeDirectArray,0);

	}




	//
	unsigned char * buffer = (unsigned char*) malloc(1024);
	memset(buffer, 0 ,1024);

	jobject directBuffer;
	directBuffer = (*env)->NewDirectByteBuffer(env,buffer,1024);

	unsigned char* pbuf = (*env)->GetDirectBufferAddress(env, directBuffer);
	memcpy(pbuf,"nihaoma", 1024);
	LOGI("pbuf is:%s\n", pbuf);
	LOGI("buffer is:%s\n", buffer);

	free(buffer);
	buffer = NULL;




	LOGI("end!\n");






    return (*env)->NewStringUTF(env, "i am test function!!,realize the auto combine of jni!!!!, i love you ,my baby!!");
}


/*
 * Class:     com_example_hellojni_Test
 * Method:    getFiled
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_hellojni_Test_getFiled
  (JNIEnv * env, jobject obj)
{
	jclass clazz;
	clazz = (*env)->GetObjectClass(env, obj);


	jfieldID instanceFieldId;
	instanceFieldId = (*env)->GetFieldID(env, clazz,"instanceField",
			"Ljava/lang/String;");

	jfieldID staticFieldId;
	staticFieldId = (*env)->GetStaticFieldID(env, clazz, "staticField",
			"Ljava/lang/String;");

//	const jbyte* str;
//	jboolean isCopy;

    jstring instanceField;
    const char *str;
    /* Read the instance field s */
    instanceField = (*env)->GetObjectField(env, obj, instanceFieldId); //第三步
    str = (*env)->GetStringUTFChars(env, instanceField, NULL);
    if (str == NULL) {
        return ""; /* out of memory */
    }
    LOGI("instancefiled  c.s = \"%s\"\n", str);
//    (*env)->ReleaseStringUTFChars(env, instanceField, str);


//    /* Create a new string and overwrite the instance field */
//    jstr = (*env)->NewStringUTF(env, "123");
//    if (jstr == NULL) {
//        return ""; /* out of memory */
//    }
//    (*env)->SetObjectField(env, obj, instanceFieldId, jstr);
//
    LOGI("ins1111111111111  c.s = \"%s\"\n", str);
    jstring staticField;
    const char *str2;
    /* Read the instance field s */
    //表态域属于类的独有一份，使用类，不使用对象
    staticField = (*env)->GetStaticObjectField(env, clazz, staticFieldId); //第三步
    str2 = (*env)->GetStringUTFChars(env, staticField, NULL);
    if (str2 == NULL) {
        return ""; /* out of memory */
    }
    LOGI("staticfield  c.s = \"%s\"\n", str2);
    (*env)->ReleaseStringUTFChars(env, staticField, str2);
//


	LOGI("Got it here.");

    return (*env)->NewStringUTF(env, "i am Java_com_example_hellojni_Test_getFiled functio!,Java_com_example_hellojni_Test_getFiled");
}




/*
 * Class:     com_example_hellojni_Test
 * Method:    getMethod
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_hellojni_Test_getMethod
  (JNIEnv *env, jobject instance)
{
	jclass clazz;
	clazz = (*env)->GetObjectClass(env, instance);

	/**
	 * 获取实例方法的ID
	 */
	jmethodID instanceMethodId;
	instanceMethodId = (*env)->GetMethodID(env, clazz,
			"instanceMethod", "()Ljava/lang/String;");

	/**
	 * 获取静态方法的ID
	 */
	jmethodID staticMethodId;
	staticMethodId = (*env)->GetStaticMethodID(env, clazz,
			"staticMethod","()Ljava/lang/String;");

//	/**
//	 * 调用实例的方法
//	 *
//	 */
//	jstring instanceMethodResult;
//	instanceMethodResult = (*env)->CallStringMethod(env,
//			instance, instanceMethodId);
//
//
//	/**
//	 * 调用表态方法
//	 */
//	jstring staticMethodResult;
//	staticMethodResult = (*env)->CallStaticByteMethodA(env,);
//











    return (*env)->NewStringUTF(env, "i am get method functio!,Java_com_example_hellojni_Test_getMethod");

}


