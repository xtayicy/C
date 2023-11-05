#include <stdio.h>

/*
	执行挂起一段时间
	seconds:秒
*/

void main(){
	int i;
	
	for(i = 1;i < 5;i++){
		printf("Sleeping for %d\n",i);
		sleep(i);
	}
}