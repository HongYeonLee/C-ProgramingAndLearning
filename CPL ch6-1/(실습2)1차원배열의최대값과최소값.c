//ch5 실습2 1차원 배열의 최대값과 최솟값
#include <stdio.h>

int main(void)
{
	double data[] = { 11.2, 2,123,1,-2,-4,5,12 }, min, max;
	int num = sizeof(data) / sizeof(double);
	min = max = data[0];

	for (int i = 1; i < num; i++)
	{
		if (min > data[i])
			min = data[i];

		if (max < data[i])
			max = data[i];
	}

	printf("배열에 저장된 원소\n");
	for (int j = 0; j < num; j++)
	{
		printf("%6.2f\n", data[j]);
	}
	printf("\n");
	printf("최대값 : %f\n", max);
	printf("최솟값 : %f\n", min);
	printf("최대값과 최소값의 차 : %f", max - min);

	return 0;

}