#include <stdio.h>

void local_incease(void);
void static_incease(void);

void main(void)
{
	for (int i = 0; i < 5; i++) static_incease(); //local_incease();

}

void local_incease(void)
{
	//지역변수 a
	int a = 0;
	a++;
	printf("%d\n", a);

	//함수의 호출이 끝나면 함수 내부에 있는 지역변수 a도 사라짐
}

void static_incease(void)
{
	//static(정적)변수
	static int a = 0;
	a++;
	printf("%d\n", a);
	
	//함수의 호출이 끝나도 함수 내부에 있는 static변수는 사라지지 않음
	//프로그램이 완전히 종료될 때, static변수는 사라짐
}