#include <stdio.h>

/*
	ִ�й���һ��ʱ��
	seconds:��
*/

void main(){
	int i;
	
	for(i = 1;i < 5;i++){
		printf("Sleeping for %d\n",i);
		sleep(i);
	}
}