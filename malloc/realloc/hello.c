#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main(){
	char *str;

	str = malloc(10);
	strcpy(str,"Hello");
	printf("String is %s\n Address is %p\n",str,str);
	str = realloc(str,20);
	printf("String is %s\n New address is %p\n",str,str);
	free(str);
}