#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
//실습6 성적 계산
int main() {

	int size;

	printf("생성할 난수 갯수를 입력하세요: ");
	scanf("%d", &size);

	int score[MAX];
	char GR[MAX];
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		*(score + i) = rand() % 101;
	}
	for (int i = 0; i < size; i++) {
		printf("%d\n", score[i]);
	}

	printf("\n");

	int* p = score;
	int temp;

	for (int i = size - 1; i > 0; i--)
		for (int j = 0; j < i; j++) {
			if (*(p + j) > *(p + j + 1)){
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}

	for (int i = 0; i < size; i++) {
		printf("%d\n", score[i]);
	}

	return 0;

}