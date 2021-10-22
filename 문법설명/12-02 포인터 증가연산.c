#include <stdio.h>

void main(void)
{
	int i = 1;
	char c = 2;
	double b = 3.0;

	int* pi = &i;
	char* pc = &c;
	double* pd = &b;
	
	printf("%p %p %p\n", pi, pc, pd);
	//포인터에 1을 더할때 마다 참조하는 대상의 메모리 크기만큼 증가한다
	//pi는 4씩(int) 증가, pc는 1씩(char) 증가, pb는 8씩(double) 증가
	printf("%p %p %p\n", pi+1, pc+1, pd+1);
	printf("%p %p %p\n", &i+1, &c+1, &b+1);

	printf("%d %d %lf\n", i, c, b);
	printf("%d %d %lf\n", i+1, c+1, b+1.0);

	int** ppi = &pi;
	char** ppc = &pc;
	double** ppd = &pd; //세 변수에 1을 더했을 때 모두 4가 올라감, 포인트 변수의 크기는 모두 4

}