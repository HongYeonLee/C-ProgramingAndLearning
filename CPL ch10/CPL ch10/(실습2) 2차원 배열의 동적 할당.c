#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
//�ǽ�2 2���� �迭�� ���� �Ҵ�
int main() {
	int n; //���� ����
	int(* p)[5]; //2���� �迭 1���� ����Ű�� ������ ����

	printf("�迭 ���� ���� �Է� : ");
	scanf("%d", &n);

	//2���� �迭 n�� 5��¥���� ����Ű�� �����Ϳ� �޸� �Ҵ�
	p = (int(*)[5])malloc(n * 5 * sizeof(int)); 


	printf("\n\n === ����� �迭 ===  \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			p[i][j] = i * 10 + j;

			printf("%4d", p[i][j]);
		}
		printf("\n");
	}

	return 0;
}
