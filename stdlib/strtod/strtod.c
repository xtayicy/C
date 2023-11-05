#include <stdio.h>
#include <stdlib.h>

/*
	把字符串转换成double，并不是太准，如参数所说
*/
void main(){
	double value;
	char str[80],*endptr;

	printf("Enter a floating point number:");
	gets(str);
	value = strtod(str,&endptr);
	printf("The string is %s the number is %lf\n",str,value);
}