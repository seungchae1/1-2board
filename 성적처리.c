#include <stdio.h>

void main(void)
{
	int score;
	printf("������ �Է��ϼ���. : ");
	scanf("%d", &score);

	if (score <= 100 && score >= 90) printf("A�Դϴ�.");
	else if (score < 90 && score >= 80) printf("B�Դϴ�.");
	else if (score < 80 && score >= 70) printf("C�Դϴ�.");
	else if (score < 70 && score >= 60) printf("D�Դϴ�.");
	else printf("E�Դϴ�.");
}