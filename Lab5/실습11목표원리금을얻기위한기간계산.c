#include <stdio.h>

int main()
{
	double money = 10000000;
	int count = 0;

	while (money < 20000000)
	{
		money *= 1.07;
		count += 1;
	}
	printf("%d�� �ɸ��ϴ�.", count);
	
	return 0;
}