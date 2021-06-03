#include <stdio.h>

void main(void)
{
	int a = 1;

	switch (a)
	{
	case 1:
		printf("한화\n");
	case 2:
		printf("감독님\n");
	default:
		printf("예에\n");
	}
}