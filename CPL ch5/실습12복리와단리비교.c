#include <stdio.h>

int main()
{
	int money = 100000;
	int compound = 0, simple = 0;
	int year = 0;

	do
	{	
		year++;
		compound = (money + compound) * 1.05;
		simple += money + money * year * 0.1;
	}
	while (simple >= compound);

	printf("%d���� ������ ���� ������� %d��(��)�Ǿ� �ܸ� ����� %d�� �ʰ��մϴ�.", year-1, compound, simple);

}