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
	
	//�÷��̾��� ��ġ
	int position = 0;

	//�ֻ���
	int dice;
	
	srand(time(0));
	rand();

	printf("������ġ : %d\n\n", position);
	getchar();

	//�ֻ��� ������(1~6)
	dice = rand() % 6 + 1;
	printf("�ֻ��� �� : %d ", dice);
	position += dice;
	printf("������ġ : %d\n", position);
	getchar();

	dice = rand() % 6 + 1;
	printf("�ֻ��� �� : %d ", dice);
	position += dice;
	printf("������ġ : %d\n", position);
	getchar();
	
	dice = rand() % 6 + 1;
	printf("�ֻ��� �� : %d ", dice);
	position += dice;
	printf("������ġ : %d\n", position);
	getchar();


}