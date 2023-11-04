#include <stdlib.h>
#include <stdio.h>

/*
	把字符串转换成长整型数，取正
*/
void main(){
	int n;
	char *str = "12345.67";

	n = atoi(str);
	printf("string = %s integer = %d\n",str,n);
}