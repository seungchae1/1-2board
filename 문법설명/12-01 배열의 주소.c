#include <stdio.h>

void main(void)
{
	int arr[4];

	//0번째 공간의 주소
	printf("&arr[0] : %p\n", &arr[0]);
	printf("arr	: %p\n", arr);

	//1번째 공간의 주소
	printf("&arr[1] : %p\n \n", &arr[1]);

	char str[4];
	//0번째 공간의 주소
	printf("&str[0] : %p\n", &str[0]);
	printf("str	: %p\n", str);

	//1번째 공간의 주소
	printf("&str[1] : %p\n", &str[1]);
}