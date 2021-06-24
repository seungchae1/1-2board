#include <stdio.h>

void main(void)
{
	/*int dan=2;
	int i=1;
	while(dan<=9)
	{
		while (i <= 9) 
		{
			printf("%d X %d =%d\n", dan, i, dan * i);
			i++;
		}
		i = 1;
		dan++;
		printf("\n");
	}*/
	for (int i = 2; i <= 9; i++) // 바깥쪽 for
	{
		if (i == 4)
		{
			break; // 바깥쪽 for문을 벗어난다.
		}
		for (int j = 1; j <= 9; j++) //안 쪽 for문
		{
			if (j == 5)
			{
				break; //안 쪽 for문을 벗어난다.
			}
			printf("%d X %d = %d\n", i, j, i * j);
		}
		printf("================\n");
	}
}