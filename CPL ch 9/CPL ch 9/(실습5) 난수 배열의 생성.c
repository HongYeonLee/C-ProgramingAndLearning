#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
//실습5 난수 배열의 생성
int main() {

	int range;
	printf("정수를 입력하시오: ");
	scanf("%d", &range);
	int a[SIZE];
	srand(time(NULL));
	for (int i = 0; i < range; i++) {
		*(a+i) = rand() % (range + 1);
		printf("%d\n", *(a+i));
	}

	return 0;

}