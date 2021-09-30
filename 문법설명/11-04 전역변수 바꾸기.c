#include <stdio.h>

int A = 3;

void changeA(void);

void main(void)
{
	printf("바꾸기 전 %d\n", A);
	changeA();
	printf("바꾸기 후 %d\n", A);
}

void chageA(void) 
{
	A = 5;
}