#include <stdio.h>

//int(��ȯ��) sum(int num1, int num2) //sum�� �Լ��̸�, num1,num2�� �Ű�����
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
	printf("c�� ���� %d \n", c);
}
