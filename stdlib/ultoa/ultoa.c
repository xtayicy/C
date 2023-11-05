#include <stdio.h>
#include <stdlib.h>

/*
	把无符号长整型数转换为字符串
*/
void main(){
	unsigned long value = 3123456789L;
	char string[25];

	ultoa(value,string,10);
	printf("string = %s unsigned long = %lu\n",string,value);
}