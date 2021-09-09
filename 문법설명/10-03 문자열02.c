#include <stdio.h>

void main(void)
{
	char str[12] = "Hello World";
	
	//문자열의 개수를 무식하게 세어서 11
	for (int i = 0; i < 11; i++)
	{
		printf("%c", str[i]);
	}
}