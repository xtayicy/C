#include <stdlib.h>
#include <stdio.h>

/*
	把字符串转换成浮点数，不准
*/
void main(){
	float f;
	char *str = "12345.67";

	f = atof(str);
	printf("string = %s float = %f\n",str,f);
}