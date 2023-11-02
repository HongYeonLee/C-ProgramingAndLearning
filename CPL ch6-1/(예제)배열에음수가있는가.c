#include <stdio.h>

int main()
{
	int a[] = { 1,2,3123,-4,-12,-31,-5 };
	int n = sizeof a / sizeof(int);
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			printf("음수가 있다");
			break;
		}

	}

	return 0;
}