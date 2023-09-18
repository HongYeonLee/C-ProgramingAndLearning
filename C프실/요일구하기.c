#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int month, day, sum;
	printf("날짜 입력: ");
	scanf("%d %d", &month, &day);
	sum = 0;

	switch (month-1)
	{
	case 11:
		sum += 30;
	case 10:
		sum += 31;
	case 9:
		sum += 30;
	case 8:
		sum += 31;
	case 7:
		sum += 31;
	case 6:
		sum += 30;
	case 5:
		sum += 31;
	case 4:
		sum += 30;
	case 3:
		sum += 31;
	case 2:
		sum += 28;
	case 1:
		sum += 31;

	default:
		break;
	}

	sum += day;
	switch (sum%7)
	{
	case 1:
		printf("sunday");
		break;
	case 2:
		printf("monday");
		break;
	case 3:
		printf("tuesday");
		break;
	case 4:
		printf("wendnesday");
		break;
	case 5:
		printf("thursday");
		break;
	case 6:
		printf("friday");
		break;
	case 0:
		printf("saturday");
		break;

	default:
		break;
	}

	return 0;

}