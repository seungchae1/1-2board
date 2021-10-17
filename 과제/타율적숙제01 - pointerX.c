#include <stdio.h>

//매개변수 a는 입력받은 번호num, m은 금액(3000)을 받는다.
//pointer변수를 사용하지 않은 버전
int order(int a, int m);

void main(void)
{
	int 금액 = 3000;
	int 코카콜라 = 700, 써니텐 = 600, 포카리스웨트 = 800;
	int num;

	while (1)
	{
		printf("현재금액 %d\n", 금액);
		printf("1. 코카콜라:700원\n");
		printf("2. 써니텐:600원\n");
		printf("3. 포카리스웨트:800원\n");
		printf("구매할 물건의 버튼을 입력하시오 ");
		scanf_s("%d", &num);
		금액 = order(num, 금액); //order함수 호출
		printf("\n");
		if (금액 < 600) //돈을 다쓰면 끝내기
		{
			printf("현재금액 %d\n", 금액);
			printf("돈이 부족합니다.\n");
			break;
		}
	}
}

int order(int a, int m)
{
	while (1)
	{
		if (a == 1)
		{
			m -= 700;
			printf("코카콜라가 나왔습니다.\n");
			break;
		}
		else if (a == 2)
		{
			m -= 600;
			printf("써니텐이 나왔습니다.\n");
			break;
		}
		else if (a == 3)
		{
			m -= 800;
			printf("포카리스웨트가 나왔습니다.\n");
			break;
		}
		else
		{
			printf("1,2,3 중에서 고르세요\n");
			printf("구매할 물건의 버튼을 입력하시오.");
			scanf_s("%d", &a);
			printf("\n");
			continue;
		}

	}

	return m;
}