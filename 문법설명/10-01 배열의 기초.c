#include <stdio.h>

void main(void)
{
	int arr[4] = { 10, 20, 30, 40};

	//배열의 시작주소값을 의미
	printf("%p\n", arr);

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", arr[i]);
	}
}