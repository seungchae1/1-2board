#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}Point;

void main(void)
{
	// 동적할당된 공간은 heap 영역에 할당된다.
	Point* ptr = (Point*)malloc(sizeof(Point));
	ptr->x = 3;
	ptr->y = 4;
	printf("%d %d\n", ptr->x, ptr->y);
}