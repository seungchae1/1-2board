#include <stdio.h>

void main(void)
{
	int score;
	printf("점수를 입력하세요. : ");
	scanf("%d", &score);

	if (score <= 100 && score >= 90) printf("A입니다.");
	else if (score < 90 && score >= 80) printf("B입니다.");
	else if (score < 80 && score >= 70) printf("C입니다.");
	else if (score < 70 && score >= 60) printf("D입니다.");
	else printf("E입니다.");
}