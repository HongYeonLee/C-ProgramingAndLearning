#include <stdio.h>

int main()
{
	int i, j;
	char c = 'A';

	for (i = 1; i <= 11; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			if (j % 2 != 0)
			{
				printf("%c ", c);
				printf("%d ", j);

			}
	
		}
		c++;
		printf("\n");
	}

}