#include <stdio.h>

int main()
{
	int i,j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 'a'; j <= 'g'; j++)
			printf("%c ", j);
		printf("\n");

		for (j = 1; j <= 7; j++)
			printf("%d ", j);
		printf("\n");
	}

	return 0;

}