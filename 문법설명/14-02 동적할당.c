//printf 함수 사용
#include <stdio.h>

//malloc, free 함수 사용
#include <stdlib.h>

void main(void) {
	//지역변수에 할당된 배열(stack영역에 할당)
	int arr[4] = { 10,20,30,40 };

	int count; //지역변수(stack 영역에 할당)
	printf("원하는 int공간의 개수를 입력하시오 : ");

	count = 4;
	//scanf("%d",&count);

	//프로그램이 실행하는 중간에 키보드로 입력이 필요함 = 키보드 입력과정은 프로그램 실행 속에서 진행됨
	//malloc으로 할당된 메모리 크기는 키보드로 입력한 순간에 결정
	//ptr은 지역변수(stack에 할당)
	int* ptr = malloc(sizeof(int) * count);
	ptr[0] = 10; ptr[1] = 20; ptr[2] = 30; ptr[3] = 40;

	//동적할당된 메모리를 해제 
	free(ptr);
}