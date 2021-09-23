#include <stdio.h>

void main(void)
{
	int num = 3;
	//ptr이라는 포인터 변수를 만들어서 num을 가리킴
	int* ptr = &num;
	printf("num 안에 들어있는 값 : %d\n", num);
	printf("num의 메모리 주소값 : %d\n", &num);
	printf("ptr 안에 들어있는 값 : %d\n", ptr);
	
}