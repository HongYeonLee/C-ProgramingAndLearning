#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
//�ǽ�5 ���� �迭�� ����
int main() {

	int range;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &range);
	int a[SIZE];
	srand(time(NULL));
	for (int i = 0; i < range; i++) {
		*(a+i) = rand() % (range + 1);
		printf("%d\n", *(a+i));
	}

	return 0;

}