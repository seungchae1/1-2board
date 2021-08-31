#include <stdio.h>

void cal_grade(int score)
{
	if (score <= 100 && score >= 90) printf("A입니다.\n");
	else if (score >= 80) printf("B입니다.\n");
	else if (score >= 70) printf("C입니다.\n");
	else if (score >= 60) printf("D입니다.\n");
	else printf("E입니다.\n");
}

void main(void)
{
	int C_score;
	printf("C점수를 입력하세요. : ");
	scanf("%d", &C_score);
	cal_grade(C_score);

	int java_score;
	printf("java점수를 입력하세요. : ");
	scanf("%d", &java_score);
	cal_grade(java_score);

	int CA_score;
	printf("컴퓨터구조점수를 입력하세요. : ");
	scanf("%d", &CA_score);
	cal_grade(CA_score);


}