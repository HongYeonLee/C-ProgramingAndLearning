#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
# define MAX 5

int main()
{
	int arr[MAX];
	double sum = 0, avg;
	printf("%d개의 정수를 입력하시오.: ", MAX);
	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	avg = sum / MAX;

	printf("sum is %.2 and average is %.2f", sum, avg);

	return 0;
}

	