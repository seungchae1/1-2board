#include <stdio.h>

void main(void)
{
	int dan = 2;
	/*for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", dan, i, dan * i);
	} */
	int i = 1;
	while (i < 10) {
		printf("%d X %d = %d\n", dan, i, dan * i);
		i++;
	}
}