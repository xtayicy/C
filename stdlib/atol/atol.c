#include <stdlib.h>
#include <stdio.h>
/*
	把字符串转换成长整型数，取正
*/
void main(){
	long l;
	char *str = "98765432.1";

	l = atol(str);
	printf("string = %s long = %ld\n",str,l);
}