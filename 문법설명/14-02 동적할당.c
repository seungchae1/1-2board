//printf �Լ� ���
#include <stdio.h>

//malloc, free �Լ� ���
#include <stdlib.h>

void main(void) {
	//���������� �Ҵ�� �迭(stack������ �Ҵ�)
	int arr[4] = { 10,20,30,40 };

	int count; //��������(stack ������ �Ҵ�)
	printf("���ϴ� int������ ������ �Է��Ͻÿ� : ");

	count = 4;
	//scanf("%d",&count);

	//���α׷��� �����ϴ� �߰��� Ű����� �Է��� �ʿ��� = Ű���� �Է°����� ���α׷� ���� �ӿ��� �����
	//malloc���� �Ҵ�� �޸� ũ��� Ű����� �Է��� ������ ����
	//ptr�� ��������(stack�� �Ҵ�)
	int* ptr = malloc(sizeof(int) * count);
	ptr[0] = 10; ptr[1] = 20; ptr[2] = 30; ptr[3] = 40;

	//�����Ҵ�� �޸𸮸� ���� 
	free(ptr);
}