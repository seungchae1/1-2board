#include <stdio.h>

void main(void)
{
	int java_score;
	printf("java������ �Է��ϼ���. : ");
	scanf("%d", &java_score);

	if (java_score <= 100 && java_score >= 90) printf("A�Դϴ�.\n");
	else if (java_score < 90 && java_score >= 80) printf("B�Դϴ�.\n");
	else if (java_score < 80 && java_score >= 70) printf("C�Դϴ�.\n");
	else if (java_score < 70 && java_score >= 60) printf("D�Դϴ�.\n");
	else printf("E�Դϴ�.\n");
	{
	int CA_score;
	printf("��ǻ�ͱ��������� �Է��ϼ���. : ");
	scanf("%d", &CA_score);

	if (CA_score <= 100 && CA_score >= 90) printf("A�Դϴ�.\n");
	else if (CA_score < 90 && CA_score >= 80) printf("B�Դϴ�.\n");
	else if (CA_score < 80 && CA_score >= 70) printf("C�Դϴ�.\n");
	else if (CA_score < 70 && CA_score >= 60) printf("D�Դϴ�.\n");
	else printf("E�Դϴ�.\n");
	}
	{
		int C_score;
		printf("C������ �Է��ϼ���. : ");
		scanf("%d", &C_score);

		if (C_score <= 100 && C_score >= 90) printf("A�Դϴ�.\n");
		else if (C_score < 90 && C_score >= 80) printf("B�Դϴ�.\n");
		else if (C_score < 80 && C_score >= 70) printf("C�Դϴ�.\n");
		else if (C_score < 70 && C_score >= 60) printf("D�Դϴ�.\n");
		else printf("E�Դϴ�.\n");
	}
}