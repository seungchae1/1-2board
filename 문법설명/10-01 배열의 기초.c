#include <stdio.h>

void main(void)
{
	int arr[4] = { 10, 20, 30, 40};

	//�迭�� �����ּҰ��� �ǹ�
	printf("%p\n", arr);

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", arr[i]);
	}
}