#include <stdio.h>

void changeA(int num);

void main(void)
{
	int A = 3;
	printf("바꾸기 전 %d\n", A);
	//변수 A를 넘겨주는 것 아닌 A안에 들어있는 3 num에게 넘겨줌
	changeA(A);
	printf("바꾸기 후 %d\n", A);
}

void changeA(int num) 
{
	num = 5;
}