#include <stdio.h>
#include <stdlib.h>

/*
	�Ѹ�����ת��Ϊ�ַ���
	ndigit����ʾ���ٸ�����
	decpt:С��������
	sign��0����������1��������
*/
void main(){
	double value;
	char *string;
	int decpt,sign;
	int ndigit = 10;

	system("cls");
	value = 9.876;
	string = ecvt(value,ndigit,&decpt,&sign);
	printf("string = %s decpt = %d sign = %d\n",string,decpt,sign);

	value = -123.45;
	ndigit = 15;
	string = ecvt(value,ndigit,&decpt,&sign);
	printf("string = %s decpt = %d sign = %d\n",string,decpt,sign);

	value = 0.6789e5;
	ndigit = 5;
	string = ecvt(value,ndigit,&decpt,&sign);
	printf("string = %s decpt = %d sign = %d\n",string,decpt,sign);
}