#include <stdio.h>

struct point { //8byte => int가 두개여서
	int x;
	int y;
};

void main(void)
{
	//선언과 동시에 초기화
	struct point p1 = { 10, 20 };
	
	//point p2;  //struct 안쓰면 에러남
	struct point p2;
	p2.x = 20;
	p2.y = 40;

	printf("(%d, %d) \n", p1.x, p1.y);
	printf("(%d, %d) \n", p2.x, p2.y);
	printf("구조체의 크기는 %d", sizeof(p1));
}