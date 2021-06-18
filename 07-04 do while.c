#include <stdio.h>

void main(void)
{
	// 인단 한 번은 출력하고 본다.
	do
	{
		printf("1111111\n");
	} while (0);

	// 한 번도 출력되지 않는다.
	while (0)
	{
		printf("2222222\n");
	}
}