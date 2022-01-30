#include <stdio.h>
#include "JavaToc.h"
JNIEXPORT void JNICALL Java_JavaToc_func(JNIEnv *env, jobject javaobj) 
{
	printf("Hello World: From C");
	return;
}
