#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
//�ǽ�1 1���� �迭�� ���� �Ҵ�
int main() {
	int n, * p;

	printf("�迭�� ũ�� �Է�: ");
	scanf("%d", &n);

	p = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		p[i] = i * 10;
		printf("%d ", p[i]);
	}

	return 0;
}