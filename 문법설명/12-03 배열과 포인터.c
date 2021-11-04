#include <stdio.h>

void main(void)
{
	int arr[4] = { 10,20,30,40 };

	//arr 0번째 공간의 주소
	printf("&arr[0] : %p\n", &arr[0]);
	printf("arr	: %p\n\n", arr);

	//arr 0번째 공간의 요소(element)값
	printf("arr[0] : %d\n", arr[0]);
	printf("*arr : %d\n\n", *arr);

	//arr 1번째 공간의 주소
	printf("&arr[1] : %p\n", &arr[1]);
	printf("arr+1 : %p\n\n", arr+1);

	//arr 1번째 공간의 요소값
	printf("arr[1] 안의 값 : %d\n", arr [1]);
	printf("*(arr + 1) 안의 값 : %d\n\n", *(arr + 1));

	char str[4] = "cut";
	//str 0번째 공간의 주소
	printf("&str[0] : %p\n", &str[0]);
	printf("str	: %p\n\n", str);
;

	//str 1번째 공간의 주소
	printf("&str[1] : %p\n", &str[1]);
	printf("str+1 : %p\n\n", str+1);

}