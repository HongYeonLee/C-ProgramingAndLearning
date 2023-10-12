#include <stdio.h>


int main()
{	
	//for문 이용
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

	//while문 이용
	/*
	int i = 0, sum = 0;
	while (i < 100)
	{
		i++; //여기서 i가 100이 된다고 바로 while문을 빠져나가지 않음
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
