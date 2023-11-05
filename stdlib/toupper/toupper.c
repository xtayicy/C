#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
	×ª»»³É´óÐ´
*/

void main(){
	int length,i;
	char string[] = "this is a string";

	length = strlen(string);
	for(i = 0;i <length;i++){
		string[i] = toupper(string[i]);
	}

	printf("%s\n",string);
}