#include <stdio.h>

void local_incease(void);
void static_incease(void);

void main(void)
{
	for (int i = 0; i < 5; i++) static_incease(); //local_incease();

}

void local_incease(void)
{
	//�������� a
	int a = 0;
	a++;
	printf("%d\n", a);

	//�Լ��� ȣ���� ������ �Լ� ���ο� �ִ� �������� a�� �����
}

void static_incease(void)
{
	//static(����)����
	static int a = 0;
	a++;
	printf("%d\n", a);
	
	//�Լ��� ȣ���� ������ �Լ� ���ο� �ִ� static������ ������� ����
	//���α׷��� ������ ����� ��, static������ �����
}