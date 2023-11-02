#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int low, high;
	int sum;
	int i;

	while (1)
	{
		printf("하한 값을 입력하세요: ");
		scanf("%d", &low);
		
		printf("상한 값을 입력하세요: ");
		scanf("%d", &high);
		
		sum = 0;

		if (low >= high)
		{
			printf("프로그램이 종료됩니다. Bye~~");
			break;
		}
		
		for (i = low; i <= high; i++)
			sum += i * i;

		printf("%d부터 %d까지 제곱들의 합은 %d\n\n", low, high, sum);


	}
	return 0;
}



