#include <stdio.h>

void main(void)
{
	int java_score;
	printf("java점수를 입력하세요. : ");
	scanf("%d", &java_score);

	if (java_score <= 100 && java_score >= 90) printf("A입니다.\n");
	else if (java_score < 90 && java_score >= 80) printf("B입니다.\n");
	else if (java_score < 80 && java_score >= 70) printf("C입니다.\n");
	else if (java_score < 70 && java_score >= 60) printf("D입니다.\n");
	else printf("E입니다.\n");
	{
	int CA_score;
	printf("컴퓨터구조점수를 입력하세요. : ");
	scanf("%d", &CA_score);

	if (CA_score <= 100 && CA_score >= 90) printf("A입니다.\n");
	else if (CA_score < 90 && CA_score >= 80) printf("B입니다.\n");
	else if (CA_score < 80 && CA_score >= 70) printf("C입니다.\n");
	else if (CA_score < 70 && CA_score >= 60) printf("D입니다.\n");
	else printf("E입니다.\n");
	}
	{
		int C_score;
		printf("C점수를 입력하세요. : ");
		scanf("%d", &C_score);

		if (C_score <= 100 && C_score >= 90) printf("A입니다.\n");
		else if (C_score < 90 && C_score >= 80) printf("B입니다.\n");
		else if (C_score < 80 && C_score >= 70) printf("C입니다.\n");
		else if (C_score < 70 && C_score >= 60) printf("D입니다.\n");
		else printf("E입니다.\n");
	}
}