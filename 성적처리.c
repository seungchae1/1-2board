#include <stdio.h>

void cal_grade(int score);
double cal_average(int c_score, int j_score, int ca_score);

void main(void)
{
	int score[3];

	printf("C������ �Է��ϼ���. : ");
	scanf("%d", &score[0]);
	cal_grade(score[0]);

	printf("java������ �Է��ϼ���. : ");
	scanf("%d", &score[1]);
	cal_grade(score[1]);

	printf("��ǻ�ͱ��������� �Է��ϼ���. : ");
	scanf("%d", &score[2]);
	cal_grade(score[2]);

	double score_aver=cal_average(score[0].score[1], score[2]);
	printf("�� ������ ����� %f�Դϴ�.", score_aver);
}

// �Է¹��� ����(score)�� ���� ����� ���
void cal_grade(int score)
{
	if (score <= 100 && score >= 90) printf("A�Դϴ�.\n");
	else if (score >= 80) printf("B�Դϴ�.\n");
	else if (score >= 70) printf("C�Դϴ�.\n");
	else if (score >= 60) printf("D�Դϴ�.\n");
	else printf("E�Դϴ�.\n");
}

//�� ������ ����� ��ȯ
double cal_average(int c_score, int j_score, int ca_score)
{
	return (double)(c_score + j_score + ca_score) / (double)3;
}