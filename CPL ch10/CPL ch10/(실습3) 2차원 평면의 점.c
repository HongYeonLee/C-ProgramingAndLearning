#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <ctype.h>
//�ǽ�3 2���� ����� ��
typedef struct {
	int x, y;
} POINT;

int main() {
	POINT* p[100] = { NULL };
	int count = -1; //count�� 0���� �ʱ�ȭ�Ϸ��� do while������ count++�� �ڿ� ���� ��
	char y_or_n;
	do {
		count++;
		p[count] = (POINT*)malloc(sizeof(POINT));

		printf("��ǥ�� �Է��Ͻÿ�(x��ǥ, y��ǥ ������): ");
		scanf("%d%d", &p[count]->x, &p[count]->y);

		printf("Do you want to continue? (y or n): ");
		getchar();
		scanf("%c", &y_or_n);

	} while (toupper(y_or_n) == 'Y');
	count++;

	printf("\n�� %d���� ����Ʈ ��ǥ�� �ԷµǾ����ϴ�. \n\n", count);

	for (int i = 0; i < count; i++) {

		if (p[i]->x > 0 && p[i]->y > 0)
			printf("��ǥ (%d, %d)�� 1��и� �Դϴ�.\n", p[i]->x, p[i]->y);
		else if (p[i]->x < 0 && p[i]->y > 0)
			printf("��ǥ (%d, %d)�� 2��и� �Դϴ�.\n", p[i]->x, p[i]->y);
		else if (p[i]->x < 0 && p[i]->y < 0)
			printf("��ǥ (%d, %d)�� 3��и� �Դϴ�.\n", p[i]->x, p[i]->y);
		else if (p[i]->x > 0 && p[i]->y < 0)
			printf("��ǥ (%d, %d)�� 4��и� �Դϴ�.\n", p[i]->x, p[i]->y);
		else
			printf("��ǥ (%d, %d)�� �����Դϴ�.\n", p[i]->x, p[i]->y);

	}
	printf("\n");

	for (int i = 0; count < i; i++) {
		free(p);
		p[i] = NULL;
	}

	return 0;

}