#include <stdio.h>

typedef struct {
	int x;
	int y;
}Point;

void main(void)
{
	Point a = { 3,4 };
	printf("%d %d\n", a.x, a.y);

	Point* ptr = &a;
	printf("%d %d\n", (*ptr).x, (*ptr).y);
	//줄여서 쓰는 방법
	printf("%d %d\n", ptr->x, ptr->y);
}