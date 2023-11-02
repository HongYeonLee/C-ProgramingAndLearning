#include <stdio.h>

int main()
{
	int i, j;
	for (i = 0; i <= 7; i++)
	{
		printf("%c ", 'A' + i);
		for (j = 1; j <= 7; j++)
			printf("%d ", j);

		printf("\n");
	}
	
	
	return 0;
}