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

	printf("%d년이 지나면 복리 저축액이 %d이(가)되어 단리 저축액 %d을 초과합니다.", year-1, compound, simple);

}