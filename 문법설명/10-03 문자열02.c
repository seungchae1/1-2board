#include <stdio.h>

void main(void)
{
	char str[12] = "Hello World";
	
	//null����('\0')�� �ƴ� �� ���
	for (int i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
}