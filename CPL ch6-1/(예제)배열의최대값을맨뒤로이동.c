#include <stdio.h>
int main(void)
{
	int a[] = { 23,1,20,5,7,-2,0,12,-34,0 };
	int temp, i;
	int n = sizeof a / sizeof(int);

	for (i = 0; i < n-1; i++)
	{
		if (a[i] > a[i + 1])
		{
			temp = a[i];
			a[i] = a[i + 1];
			a[i+1] = temp;
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}