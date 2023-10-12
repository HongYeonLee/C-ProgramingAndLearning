#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int low, high, i, count=0;
	printf("첫째 숫자를 입력하세요 : ");
	scanf("%d", &low);
	printf("둘째 숫자를 입력하세요 : ");
	scanf("%d", &high);
	printf("\n");

	printf("%d와 %d사이의 홀수들은 다음과 같습니다.\n", low, high);
	for (i = low; i <= high; i++)
	{
		if (i % 2 == 1)
		{
			printf("%4d", i);
			count++;
			if (count%5==0)
				printf("\n");
		}
						
	}

	return 0;


}