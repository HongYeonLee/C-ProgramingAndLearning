#include <stdio.h>

int main()
{
	int a[] = { 1,4,-2,-4,5,-17,-5 };
	int count = 0;
	int n = sizeof(a) / sizeof(int);
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			count++;
	}
	printf("음수의 개수 = %d", count);

	return 0;
}