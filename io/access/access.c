#include <stdio.h>

/*
	确定文件是否存在	
*/
int file_exists(char *filename){
	return (access(filename,0) == 0);
}

void main(){
	printf("Does NOTEXISTS.FIL exist:%s\n",file_exists("NOTEXISTS.FIL")?"YES":"No");
}