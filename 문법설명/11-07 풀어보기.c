#include <stdio.h>

void main(void)
{
	int a;
	double b;
	char c;
	int* ptra=&a;
	double* ptrb = &b;
	char* ptrc= &c;

	printf("a:%d\n", sizeof(a));
	printf("b:%d\n", sizeof(b));
	printf("c:%d\n", sizeof(c));
	printf("ptra:%d\n", sizeof(ptra));
	printf("ptrb:%d\n", sizeof(ptrb));
	printf("ptrc:%d\n", sizeof(ptrc));
}