#include <stdio.h>

//매개변수 a는 입력받은 번호num, m은 금액의 메모리주소값을 받는다.
void order(int num, int* money);

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
		order(num, &금액); //order함수 호출
		printf("\n");
		if (금액 < 600) //돈을 다쓰면 끝내기
		{
			printf("현재금액 %d\n", 금액);
			printf("돈이 부족합니다.\n");
			break;
		}
	}
}

void order(int num, int* money)
{
	switch (num) {
	case 1:
		*money -= 700;
		printf("\n코카콜라가 나왔습니다.\n");
		break;
	case 2:
		*money -= 600;
		printf("\n써니텐이 나왔습니다.\n");
		break;
	case 3:
		*money -= 800;
		printf("\n포카리스웨트가 나왔습니다.\n");
		break;

	default:
		printf("\n1,2,3 중에서 고르세요\n");
		printf("구매할 물건의 버튼을 입력하시오.");
		scanf_s("%d", &num);
		printf("\n");
		order(num, money); //함수 다시 호출
	}
}