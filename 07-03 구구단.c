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
	for (int i = 2; i <= 9; i++) // �ٱ��� for
	{
		if (i == 4)
		{
			break; // �ٱ��� for���� �����.
		}
		for (int j = 1; j <= 9; j++) //�� �� for��
		{
			if (j == 5)
			{
				break; //�� �� for���� �����.
			}
			printf("%d X %d = %d\n", i, j, i * j);
		}
		printf("================\n");
	}
}