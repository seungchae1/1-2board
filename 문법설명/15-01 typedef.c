#include <stdio.h>

typedef int* p_int; //�ڷ��� ��Ī

void main(void)
{
	int num = 3;
	//int* ptr = &num;
	p_int ptr = &num;
	
	*ptr = 4;
	printf("%d \n", num);
}