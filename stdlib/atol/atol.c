#include <stdlib.h>
#include <stdio.h>
/*
	���ַ���ת���ɳ���������ȡ��
*/
void main(){
	long l;
	char *str = "98765432.1";

	l = atol(str);
	printf("string = %s long = %ld\n",str,l);
}