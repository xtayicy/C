#include <stdio.h>
#include <errno.h>

/*
	返回指向错误信息字符串的指针
*/
void main(){
	char *buffer;

	buffer = strerror(1);
	printf("Error:%s\n",buffer);

	buffer = strerror(2);
	printf("Error:%s\n",buffer);

	buffer = strerror(error);
	printf("Error:%s\n",buffer);
}