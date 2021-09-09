#include <stdio.h>

void main(void)
{
	char str[12] = "Hello World";
	
	//null문자('\0')가 아닐 때 출력
	for (int i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
}