#include <stdio.h>
#include <stdlib.h>
hw3_1(void)
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d", j);
		printf("\n");
	}

	//system("pause");
	//return 0;
}
