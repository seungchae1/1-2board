#include <stdio.h>

void main(void)
{

	/*for (int dan = 2; dan <= 9; dan++) {
		for (int i = 1; i <= 9; i++) {
			printf("%d X %d =%d\n", dan, i, dan * i);
		}
		printf("\n");*/
	int dan=2;
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
	}
}