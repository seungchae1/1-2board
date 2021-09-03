#include <stdio.h>

void cal_grade(int score);
double cal_average(int c_score, int j_score, int ca_score);

void main(void)
{
	int score[3];

	printf("C점수를 입력하세요. : ");
	scanf("%d", &score[0]);
	cal_grade(score[0]);

	printf("java점수를 입력하세요. : ");
	scanf("%d", &score[1]);
	cal_grade(score[1]);

	printf("컴퓨터구조점수를 입력하세요. : ");
	scanf("%d", &score[2]);
	cal_grade(score[2]);

	double score_aver=cal_average(score[0].score[1], score[2]);
	printf("세 과목의 평균은 %f입니다.", score_aver);
}

// 입력받은 점수(score)에 대한 등급을 출력
void cal_grade(int score)
{
	if (score <= 100 && score >= 90) printf("A입니다.\n");
	else if (score >= 80) printf("B입니다.\n");
	else if (score >= 70) printf("C입니다.\n");
	else if (score >= 60) printf("D입니다.\n");
	else printf("E입니다.\n");
}

//세 과목의 평균을 반환
double cal_average(int c_score, int j_score, int ca_score)
{
	return (double)(c_score + j_score + ca_score) / (double)3;
}