#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
//�ǽ�6 ���� ���
int main() {

	int size;

	printf("������ ���� ������ �Է��ϼ���: ");
	scanf("%d", &size);

	int score[MAX];
	char GR[MAX];
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		*(score + i) = rand() % 101;
		if (*(score + i) >= 90)
			*(GR + i) = 'A';
		else if (*(score + i) >= 80)
			*(GR + i) = 'B';
		else if (*(score + i) >= 70)
			*(GR + i) = 'C';
		else if (*(score + i) >= 60)
			*(GR + i) = 'D';
		else
			*(GR + i) = 'F';
	}

	for (int i = 0; i < size; i++) {
		printf("score[%d] = %3d, GR[%d] = %c\n", i, *(score + i), i, *(GR + i));
	}

	return 0;

}