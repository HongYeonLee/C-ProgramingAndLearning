#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 100
#include <stdio.h>
#include <stdlib.h>
//실습14 여러 함수에서 수정하는 배열
int num; // 전역변수는 선언시 자동으로 0으로 초기화
int arr[MAXSIZE];

void read0(void) { // 0~100사이의 난수 생성
	srand((int)time(NULL));
	arr[num++] = rand() % 101;
}
void read1(void) {// -1 ~ -100사이의 난수 생성
	srand((int)time(NULL));
	arr[num++] = -((rand() % 100) + 1);
}

void countNum(int* plus, int* minus) {//포인터 형태로 바꾸면 리턴하지 않아도 메인 함수의 값이 자동으로 변경됨
	int i;
	*plus = *minus = 0;
	for (i = 0; i < num; i++) {
		if (arr[i] > 0)
			(*plus)++;
		else
			(*minus)++;
	}
}
int main() {
	int i, flag, plusNum, minusNum;
	while (1) {
		printf("0혹은 1을 입력하세요 (중단하려면 다른 숫자 입력): ");
		scanf("%d", &flag);

		switch (flag) {
		case 0: {
			read0();
			break;
		}

		case 1: {
			read1();
			break;
		}

		default: {
			printf("\n     입력된 데이터\n");
			printf("=====================================\n");
			for (int i = 0; i < num; i++) {
				if (i % 4 == 0)
					printf("\n");
				printf("%5d", arr[i]);
			}
			countNum(&plusNum, &minusNum);
			printf("\n총 데이터 개수 : %d\n", num);
			printf("양수 개수 : %d\n", plusNum);
			printf("음수 개수 : %d\n", minusNum);
			return 0;

		}
		}

	}
}