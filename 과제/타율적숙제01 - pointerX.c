#include <stdio.h>

//�Ű����� a�� �Է¹��� ��ȣnum, m�� �ݾ�(3000)�� �޴´�.
//pointer������ ������� ���� ����
int order(int a, int m);

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
		�ݾ� = order(num, �ݾ�); //order�Լ� ȣ��
		printf("\n");
		if (�ݾ� < 600) //���� �پ��� ������
		{
			printf("����ݾ� %d\n", �ݾ�);
			printf("���� �����մϴ�.\n");
			break;
		}
	}
}

int order(int a, int m)
{
	while (1)
	{
		if (a == 1)
		{
			m -= 700;
			printf("��ī�ݶ� ���Խ��ϴ�.\n");
			break;
		}
		else if (a == 2)
		{
			m -= 600;
			printf("������� ���Խ��ϴ�.\n");
			break;
		}
		else if (a == 3)
		{
			m -= 800;
			printf("��ī������Ʈ�� ���Խ��ϴ�.\n");
			break;
		}
		else
		{
			printf("1,2,3 �߿��� ������\n");
			printf("������ ������ ��ư�� �Է��Ͻÿ�.");
			scanf_s("%d", &a);
			printf("\n");
			continue;
		}

	}

	return m;
}