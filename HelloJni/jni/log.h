/*
 * log.h
 *
 *  Created on: 2016Äê5ÔÂ12ÈÕ
 *      Author: John
 */

#ifndef LOG_H_
#define LOG_H_

#include <string.h>
#include <stdio.h>
#include <jni.h>
#include <android/log.h>
#define LOG_TAG "MYJNI"
#define LOGI(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)



#endif /* LOG_H_ */
