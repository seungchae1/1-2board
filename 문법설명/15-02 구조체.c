#include <stdio.h>

struct point { //8byte => int�� �ΰ�����
	int x;
	int y;
};

void main(void)
{
	//����� ���ÿ� �ʱ�ȭ
	struct point p1 = { 10, 20 };
	
	//point p2;  //struct �Ⱦ��� ������
	struct point p2;
	p2.x = 20;
	p2.y = 40;

	printf("(%d, %d) \n", p1.x, p1.y);
	printf("(%d, %d) \n", p2.x, p2.y);
	printf("����ü�� ũ��� %d", sizeof(p1));
}