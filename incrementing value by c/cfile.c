#include<stdio.h>
#include "IncrementMethod.h"
JNIEXPORT void JNICALL Java_IncrementMethod_count
  (JNIEnv *env, jobject jobj)
{
  jclass myClass = (*env)->GetObjectClass(env,jobj);
  jmethodID next = (*env)->GetStaticMethodID(env,myClass,"increment","()V");
  (*env)->CallStaticVoidMethod(env,jobj,next,NULL);
  
  //access a instance variable
  jfieldID now = (*env)->GetStaticFieldID(env,myClass,"a","I");
  jint a_now = (*env)->GetStaticIntField(env,jobj,now);
  (*env)->SetStaticIntField(env,jobj,now,a_now*100);
  return;
}
