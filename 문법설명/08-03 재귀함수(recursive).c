#include <stdio.h>

int factorial(int num)
{
	if (num == 1){
		return 1;
	}
	return num * factorial(num - 1);
}

void main(void)
{
	int a = factorial(2);
	printf("%d", a);
}