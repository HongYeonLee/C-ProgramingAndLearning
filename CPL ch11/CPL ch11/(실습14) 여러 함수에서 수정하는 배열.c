#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 100
#include <stdio.h>
#include <stdlib.h>
//�ǽ�14 ���� �Լ����� �����ϴ� �迭
int num; // ���������� ����� �ڵ����� 0���� �ʱ�ȭ
int arr[MAXSIZE];

void read0(void) { // 0~100������ ���� ����
	srand((int)time(NULL));
	arr[num++] = rand() % 101;
}
void read1(void) {// -1 ~ -100������ ���� ����
	srand((int)time(NULL));
	arr[num++] = -((rand() % 100) + 1);
}

void countNum(int* plus, int* minus) {//������ ���·� �ٲٸ� �������� �ʾƵ� ���� �Լ��� ���� �ڵ����� �����
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
		printf("0Ȥ�� 1�� �Է��ϼ��� (�ߴ��Ϸ��� �ٸ� ���� �Է�): ");
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
			printf("\n     �Էµ� ������\n");
			printf("=====================================\n");
			for (int i = 0; i < num; i++) {
				if (i % 4 == 0)
					printf("\n");
				printf("%5d", arr[i]);
			}
			countNum(&plusNum, &minusNum);
			printf("\n�� ������ ���� : %d\n", num);
			printf("��� ���� : %d\n", plusNum);
			printf("���� ���� : %d\n", minusNum);
			return 0;

		}
		}

	}
}