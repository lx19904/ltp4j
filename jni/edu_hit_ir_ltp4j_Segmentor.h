/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_hit_ir_ltp4j_Segmentor */

#ifndef _Included_edu_hit_ir_ltp4j_Segmentor
#define _Included_edu_hit_ir_ltp4j_Segmentor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_hit_ir_ltp4j_Segmentor
 * Method:    create
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_edu_hit_ir_ltp4j_Segmentor_create__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     edu_hit_ir_ltp4j_Segmentor
 * Method:    create
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_edu_hit_ir_ltp4j_Segmentor_create__Ljava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     edu_hit_ir_ltp4j_Segmentor
 * Method:    segment
 * Signature: (Ljava/lang/String;Ljava/util/List;)I
 */
JNIEXPORT jint JNICALL Java_edu_hit_ir_ltp4j_Segmentor_segment
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     edu_hit_ir_ltp4j_Segmentor
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_edu_hit_ir_ltp4j_Segmentor_release
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif