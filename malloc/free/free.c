#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main(){
	char *str;

	str = malloc(10);
	strcpy(str,"Hello");
	printf("String is %s\n",str);
	free(str);
}