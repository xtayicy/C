#include <stdlib.h>
#include <stdio.h>

void main(){
	int value = 12345;
	char string[25];

	itoa(value,string,10);
	printf("integer = %d string = %s\n",value,string);
}