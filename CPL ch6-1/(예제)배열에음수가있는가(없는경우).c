#include <stdio.h>

int main()
{
	int a[] = { 0, 1, 2};
	int n = sizeof a / sizeof(int);
	int flag = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			printf("������ �ֽ��ϴ�.");
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		printf("������ �����ϴ�.");

	return 0;
}