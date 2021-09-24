#include <stdio.h>

void main(void)
{
	int num1 = 3, num2 = 30;
	printf("num1안에 들어있는 값 : %d\n", num1);
	printf("num2안에 들어있는 값 : %d\n", num2);

	int* ptr = &num1;
	*ptr = 4;
	ptr = &num2;
	printf("num1안에 들어있는 값 : %d\n", num1);
	printf("num2안에 들어있는 값 : %d\n", num2);
}