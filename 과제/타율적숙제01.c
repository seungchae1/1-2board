#include <stdio.h>

//�Ű����� a�� �Է¹��� ��ȣnum, m�� �ݾ��� �޸��ּҰ��� �޴´�.
void order(int num, int* money);

void main(void)
{
	int �ݾ� = 3000;
	int ��ī�ݶ� = 700, ����� = 600, ��ī������Ʈ = 800;
	int num;

	while (1)
	{
		printf("����ݾ� %d\n", �ݾ�);
		printf("1. ��ī�ݶ�:700��\n");
		printf("2. �����:600��\n");
		printf("3. ��ī������Ʈ:800��\n");
		printf("������ ������ ��ư�� �Է��Ͻÿ� ");
		scanf_s("%d", &num);
		order(num, &�ݾ�); //order�Լ� ȣ��
		printf("\n");
		if (�ݾ� < 600) //���� �پ��� ������
		{
			printf("����ݾ� %d\n", �ݾ�);
			printf("���� �����մϴ�.\n");
			break;
		}
	}
}

void order(int num, int* money)
{
	switch (num) {
	case 1:
		*money -= 700;
		printf("\n��ī�ݶ� ���Խ��ϴ�.\n");
		break;
	case 2:
		*money -= 600;
		printf("\n������� ���Խ��ϴ�.\n");
		break;
	case 3:
		*money -= 800;
		printf("\n��ī������Ʈ�� ���Խ��ϴ�.\n");
		break;

	default:
		printf("\n1,2,3 �߿��� ������\n");
		printf("������ ������ ��ư�� �Է��Ͻÿ�.");
		scanf_s("%d", &num);
		printf("\n");
		order(num, money); //�Լ� �ٽ� ȣ��
	}
}