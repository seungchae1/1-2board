#include <stdio.h>

void main(void)
{
	int num = 3;
	//ptr�̶�� ������ ������ ���� num�� ����Ŵ
	int* ptr = &num;

	printf("num �ȿ� ����ִ� �� : %d\n", num);
	printf("num�� �޸� �ּҰ� : %p\n", &num);
	printf("ptr �ȿ� ����ִ� �� : %p\n", ptr);

	//������ ������ ������ �޸� �ּ�(����)�� �Ҵ��
	printf("ptr�� �޸� �ּҰ� : %p\n", &ptr);
	printf("ptr�� ����Ű�� ���� �ȿ� ����ִ� �� : %d\n", *ptr);
}