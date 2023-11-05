#include <stdio.h>

/*
	ÏÔÊ¾´íÎóÐÅÏ¢
*/
void main(){
	FILE *fp;

	fp = fopen("perror.dat","r");
	if(!fp){
		perror("Unable to open file for reading");
	}
	
}