/* 보드게임 만들기 21.05.13*/
/*
1. 전체 칸의 갯수 61개
2.플레이어가 가지고 있어야 하는 것
- 위치 정보(말) : 0부터 시작
- 돈 : 5,000,000 부터 시작
- 아이템 인벤토리 (나중에 가능하면)
3.파산 기준 : 0원
4. 완료 조건 : 말이 61에 있어야 한다. 넘어가면X
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(void)
{
	//칸의 최대갯수 (상수형 변수[공간]) 
	const int MAX_LENGTH = 61;
	
	//플레이어의 위치
	int position = 0;

	//주사위
	int dice;

	int money = 5000000;
	
	srand(time(0));
	rand();

	printf("현재위치 : %d\n\n", position);

	while (1) 
	{
		getchar(); //주사위를 던지기 위해서는 엔터키를 눌러야 한다.
		//주사위 던지기(1~6)
		dice = rand() % 6 + 1;
		position += dice;
		printf("주사위를 던져서 %d가 나왔습니다.\n", dice);
		printf("현재위치 : %d, 가진 돈 : %d\n\n", position, money);

		//test code
		//position = 52;

		//7번에 있을때 3번으로 이동
		switch (position)
		{
		case 7: printf("3번 위치로 이동합니다.\n");
				position = 3;
				printf("현재위치 : %d, 가진 돈 : %d\n\n", position, money);
				break;
		case 15: printf("주식이 떨어져 200만원이 차감됩니다.\n");
				money -= 2000000;
				printf("현재위치 : %d, 가진 돈 : %d\n\n", position, money);
				break;
		case 20: printf("재산의 20%%를 사회에 기부합니다.\n");
				//money = money - money * 0.2;
				money *= 0.8;
				printf("현재위치 : %d, 가진 돈 : %d\n\n", position, money);
				break;
		case 52: printf("위치 52 무인도에 갇혔습니다.\n");
			for (int i = 1; i <= 3; i++)
			{
				getchar();
				printf("%d번째 입니다.\n",i);
			}
			printf("현재위치 : %d, 가진 돈 : %d\n\n", position, money);
		}
		
		//파산처리
		if (money <= 0) {
			printf("파산하셨습니다...ㅠㅠㅠ\n");
			break;
		}
		
		//61 위치에만 있어야 게임을 끝낸다. 
		if (position == MAX_LENGTH) {
			printf("축하합니다!! 목적지에 도달하였습니다.\n");
			break;
		}

		if (position > MAX_LENGTH) {
			printf("목적지를 넘어섰습니다. 바로 전 위치로 이동합니다.\n");
				position -=dice;
				printf("현재위치 : %d, 가진 돈 : %d\n\n", position, money);
		}
	}//while문 끝
	printf("게임이 끝났습니다.");
	

}