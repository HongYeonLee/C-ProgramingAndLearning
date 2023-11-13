#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
//실습1 1차원 배열의 동적 할당
int main() {
	int n, * p;

	printf("배열의 크기 입력: ");
	scanf("%d", &n);

	p = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		p[i] = i * 10;
		printf("%d ", p[i]);
	}

	return 0;
}