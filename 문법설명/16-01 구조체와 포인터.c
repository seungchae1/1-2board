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
	//�ٿ��� ���� ���
	printf("%d %d\n", ptr->x, ptr->y);
}