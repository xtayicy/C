#include <stdlib.h>
#include <stdio.h>

/*
	���ַ���ת���ɸ���������׼
*/
void main(){
	float f;
	char *str = "12345.67";

	f = atof(str);
	printf("string = %s float = %f\n",str,f);
}