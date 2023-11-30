#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//실습11 기원 후 몇 번째 날 요일 계산
void PrintDayofTheWeek(int days) {
	switch (days % 7) {
	case 1:
		printf("월요일입니다.");
		break;
	case 2:
		printf("화요일입니다.");
		break;
	case 3:
		printf("수요일입니다.");
		break;
	case 4:
		printf("목요일입니다.");
		break;
	case 5:
		printf("금요일입니다.");
		break;
	case 6:
		printf("토요일입니다.");
		break;
	case 0:
		printf("일요일입니다.");
		break;
	}
}

int main(){
	int day;
	printf("기원 후 몇번째 날입니까?: ");
	scanf("%d", &day);
	PrintDayofTheWeek(day);

	return 0;
}

