#include <stdio.h>

int main(void)
{
	int a[] = { 1,23,5,9,24,-7 };
	int n = sizeof a / sizeof(int);
	int temp;
	
	for (int j = n - 1; j > 0; j--)
	{
		for (int i = 0; i < j; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;

}