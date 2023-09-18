#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int order;
	printf("어떤 음식을 주문하시겠습니까?\n");
	printf("짜장면: 1, 짬뽕: 2, 군만두: 3, 탕수육: 4\n\n");
	scanf("%d", &order);

	switch (order)
	{
	case 1:
		printf("짜장면 배달이요");
		break;
	case 2:
		printf("짬뽕 배달이요");
		break;
	case 3:
		printf("군만두 배달이요");
		break;
	case 4:
		printf("탕수육 배달이요");
		break;
	default:
		printf("다음에 또 주문이요");
		break;
	}
	return 0;
}