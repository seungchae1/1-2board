#include <stdio.h>

void main(void)
{
	char str[12] = "Hello World";
	
	//���ڿ��� ������ �����ϰ� ��� 11
	for (int i = 0; i < 11; i++)
	{
		printf("%c", str[i]);
	}
}