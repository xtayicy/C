#include <stdlib.h>
#include <stdio.h>

/*
	把浮点数转换成字符串
*/
void main(){
	double num;
	int ndigit = 5;
	char buf[25];
	
	num = 9.876;
	gcvt(num,ndigit,buf);
	printf("string = %s\n",buf);

	ndigit = 3;
	gcvt(num,ndigit,buf);
	printf("string = %s\n",buf);

	num = -123.4567;
	ndigit = 5;
	gcvt(num,ndigit,buf);
	printf("string = %s\n",buf);

	num = 0.678e5;
	gcvt(num,ndigit,buf);
	printf("string = %s\n",buf);

	ndigit = 3;
	gcvt(num,ndigit,buf);
	printf("string = %s\n",buf);
}