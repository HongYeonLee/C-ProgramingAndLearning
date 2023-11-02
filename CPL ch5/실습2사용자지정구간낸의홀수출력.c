#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int low, high, i=0;
	printf("enter the first number: ");
	scanf("%d", &low);
	printf("enter the second number: ");
	scanf("%d", &high);

	printf("%d와 %d사이의 홀수들은 다음과 같습니다.\n", low, high);

	for (i = low; i <= high; i++)
		if (i % 2 == 1)
			printf("%d ", i); 

	return 0;

}