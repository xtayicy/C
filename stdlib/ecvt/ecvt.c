#include <stdlib.h>
#include <stdio.h>

/*
	��һ��������ת�����ַ���
	ndigit:�м�������
	decpt:С��������
	sign:0Ϊ������1Ϊ����
*/
void main(){
	double value;
	int ndigit = 10;
	int decpt,sign;
	char *string;

	system("cls");
	value = 9.876;
	string = ecvt(value,ndigit,&decpt,&sign);
	printf("string = %s decpt = %d sign = %d\n",string,decpt,sign);

	value = -123.45;
	ndigit = 15;
	string = ecvt(value,ndigit,&decpt,&sign);
	printf("string = %s decpt = %d sign = %d\n",string,decpt,sign);

	value = 0.678e5;
	ndigit = 5;
	string = ecvt(value,ndigit,&decpt,&sign);
	printf("string = %s decpt = %d sign = %d\n",string,decpt,sign);
}