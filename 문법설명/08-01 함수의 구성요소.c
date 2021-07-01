#include <stdio.h>

//int(반환형) sum(int num1, int num2) //sum은 함수이름, num1,num2는 매개변수
//{
//	return num1 + num2;
//}

int sum(int num1, int num2)
{
	return num1 + num2;
}

void main(void)
{
	int a = 1, b = 2;
	int c;
	c = sum(1,5);
	printf("c의 값은 %d \n", c);
}
