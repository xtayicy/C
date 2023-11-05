#include <stdio.h>
#include <stdlib.h>

/*
	把字符串转换成长正数，并不是太准，如参数所说
*/

void main(){
	long lnumber;
	char *str = "87654321",*endptr;

	lnumber = strtol(str,&endptr,10);
	printf("string = %s long = %ld\n",str,lnumber);

	str = "123 this is";
	lnumber = strtol(str,&endptr,10);
	printf("string = %s long = %ld\n",str,lnumber);

	str = "this is 123";
	lnumber = strtol(str,&endptr,10);
	printf("string = %s long = %ld\n",str,lnumber);
}