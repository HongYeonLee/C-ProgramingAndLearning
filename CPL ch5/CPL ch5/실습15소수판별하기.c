#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i; 
	
	printf("양의 정수(0 입력시 종료): ");
	scanf("%d", &n);

	while (n>0)
	{
		for (i = 2; i < n; i++) // 1과 2는 조건에 해당하지 않기 때문에 for문에 해당하지 않아 소수로 출력
		{
			if (n == 0) //소수가 아닌 수 받은 뒤 0을 받았을 경우 for문을 빠져나감
				break;

			if (n % i == 0)
			{
				printf("소수가 아닙니다\n\n");
				printf("양의 정수: ");
				scanf("%d", &n);
				continue;
			}

		}
		if (n == 0) // 0이 소수라고 출력되는 것을 방지하고 while문을 빠져나감
			break;

		printf("소수입니다.\n\n");
		printf("양의 정수: ");
		scanf("%d", &n);

	}
	printf("끝\n");

	return 0;



}