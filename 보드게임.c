/* 보드게임 만들기 21.05.13*/
/*
1. 전체 칸의 갯수 61개
2.플레이어가 가지고 있어야 하는 것
- 위치 정보(말) : 0부터 시작
- 돈 : 5,000,000 부터 시작
- 아이템 인벤토리 (나중에 가능하면)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(void)
{
	//칸의 최대갯수
	int max_length = 61;
	
	//주사위
	int dice;
	
	srand(time(0));
	rand();
	dice = rand();

	printf("%d\n", dice);


}