#include <stdio.h>
#include <errno.h>

/*
	����ָ�������Ϣ�ַ�����ָ��
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