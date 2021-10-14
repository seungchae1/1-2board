#include <stdio.h>

void Swap(int *num1,int *num2);

void main(void)
{
	int a = 10, b = 20;
	printf("바꾸기 전 a:%d b:%d \n",a,b);
	Swap(&a, &b);
	printf("바꾸기 후 a:%d b:%d \n",a,b);
}

void Swap(int *num1, int *num2)
{
	int* temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}