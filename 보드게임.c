/* ������� ����� 21.05.13*/
/*
1. ��ü ĭ�� ���� 61��
2.�÷��̾ ������ �־�� �ϴ� ��
- ��ġ ����(��) : 0���� ����
- �� : 5,000,000 ���� ����
- ������ �κ��丮 (���߿� �����ϸ�)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(void)
{
	//ĭ�� �ִ밹��
	int max_length = 61;
	
	//�ֻ���
	int dice;
	
	srand(time(0));
	rand();
	dice = rand();

	printf("%d\n", dice);


}