#include <stdio.h>

void main(void) {
	int count; //��������(stack ������ �Ҵ�)
	printf("���ϴ� int������ ������ �Է��Ͻÿ� : ");
	scanf("%d", &count);

	//���α׷��� �����ϴ� �߰��� Ű����� ���� �ʿ��� = Ű���� �Է°����� ���α׷� ���� �ӿ��� �����
	//malloc���� �Ҵ�� �޸� ũ��� Ű����� �Է��� ������ ����
	int* ptr = malloc(sizeof(int) * count);
}