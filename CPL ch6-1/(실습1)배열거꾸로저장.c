#define _CRT_SECURE_NO_WARNINGS //실습1 배열거꾸로저장
#include <stdio.h>
#define MAXSIZE 100
int main(void)
{
	int size, i, j, k;
	printf("몇개의 정수를 입력받기 원합니까?: ");
	scanf("%d", &size);
	printf("\n");
	printf("%d개의 정수를 입력하십시오.: ", size);
	
	int num[MAXSIZE] = { 0 };
	int r_num[MAXSIZE] = { 0 };

	for (i = 0; i < size; i++)
		scanf("%d", &num[i]);

	for (j = size - 1, i = 0; j >= 0, i < size; j--, i++)
		r_num[j] = num[i];

	printf("\n");

	for (j = 0; j < size; j++)
		printf("%d ", num[j]);
	printf("을(를) 입력하였습니다.\n\n");
	printf("\n이를 거꾸로 하면 ");
	
	for (k = 0; k < size; k++)
		printf("%d ", r_num[k]);
	printf("입니다.\n\n");
	printf("끝\n");

	return 0;

}
