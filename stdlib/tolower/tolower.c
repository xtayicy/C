#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
	×ª»»³ÉÐ¡Ð´
*/

void main(){
	int length,i;
	char string[] = "THIS IS A STRING";

	length = strlen(string);
	for(i = 0;i <length;i++){
		string[i] = tolower(string[i]);
	}

	printf("%s\n",string);
}