#include <stdio.h>


int main()
{	
	//for�� �̿�
	/*
	int i, sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 7 == 0)
			continue;
		sum += i;
	}

	printf("the sum without mutiply of 7 is %d", sum);

	return 0;
	*/

	//while�� �̿�
	/*
	int i = 0, sum = 0;
	while (i < 100)
	{
		i++; //���⼭ i�� 100�� �ȴٰ� �ٷ� while���� ���������� ����
		if (i % 7 == 0)
			continue;
		sum += i;
	}
	printf("the sum without mutiply of 7 is %d", sum);

	return 0;
	*/

	int i = 0, sum = 0;
	do
	{
		i++;
		if (i % 7 == 0)
			continue;
		sum += i;
	} while (i < 100);

	printf("the sum without mutiply of 7 is %d", sum);

	return 0;
}
