#include<stdio.h>
#include "Factorial.h"
jlong fact(int n)
{
  if(n==1)
  {
   return 1;
  }
 return n*fact(n-1);
}
JNIEXPORT jlong JNICALL Java_Factorial_call(JNIEnv *env, jobject javaobj,jint n){
  jlong ans = fact(n);
  return ans;
}

