#include <stdio.h>

void cal_grade(int score)
{
	if (score <= 100 && score >= 90) printf("A�Դϴ�.\n");
	else if (score >= 80) printf("B�Դϴ�.\n");
	else if (score >= 70) printf("C�Դϴ�.\n");
	else if (score >= 60) printf("D�Դϴ�.\n");
	else printf("E�Դϴ�.\n");
}

void main(void)
{
	int C_score;
	printf("C������ �Է��ϼ���. : ");
	scanf("%d", &C_score);
	cal_grade(C_score);

	int java_score;
	printf("java������ �Է��ϼ���. : ");
	scanf("%d", &java_score);
	cal_grade(java_score);

	int CA_score;
	printf("��ǻ�ͱ��������� �Է��ϼ���. : ");
	scanf("%d", &CA_score);
	cal_grade(CA_score);


}