#include <stdio.h>

int main()
{
	int money = 1000000000;
	int year = 0;

	do
	{
		money = money * (1.08) - 100000000;
		year++;

	} while (money > 0);

	printf("%d", year);

	return 0;
}