#include <stdio.h>

int main()
{
	int a[] = { 123,23,12,41,31 };
	int min = a[0];

	int n = sizeof a / sizeof(int);
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
	}

	printf("�ּڰ��� %d�̴�", min);

	return 0;
}