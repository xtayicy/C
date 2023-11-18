#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main(){
	char *str;

	if((str = malloc(10)) == NULL){
		printf("Not enough memory to allocate buffer\n");
		return;
	}

	strcpy(str,"Hello");
	printf("String is %s\n",str);
	free(str);
}