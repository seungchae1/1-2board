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
	//�����Ϳ� 1�� ���Ҷ� ���� �����ϴ� ����� �޸� ũ�⸸ŭ �����Ѵ�
	//pi�� 4��(int) ����, pc�� 1��(char) ����, pb�� 8��(double) ����
	printf("%p %p %p\n", pi+1, pc+1, pd+1);
	printf("%p %p %p\n", &i+1, &c+1, &b+1);

	printf("%d %d %lf\n", i, c, b);
	printf("%d %d %lf\n", i+1, c+1, b+1.0);

	int** ppi = &pi;
	char** ppc = &pc;
	double** ppd = &pd; //�� ������ 1�� ������ �� ��� 4�� �ö�, ����Ʈ ������ ũ��� ��� 4

}