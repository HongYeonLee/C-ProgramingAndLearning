#define _CRT_SECURE_NO_WARNINGS //�ǽ�1 �迭�Ųٷ�����
#include <stdio.h>
#define MAXSIZE 100
int main(void)
{
	int size, i, j, k;
	printf("��� ������ �Է¹ޱ� ���մϱ�?: ");
	scanf("%d", &size);
	printf("\n");
	printf("%d���� ������ �Է��Ͻʽÿ�.: ", size);
	
	int num[MAXSIZE] = { 0 };
	int r_num[MAXSIZE] = { 0 };

	for (i = 0; i < size; i++)
		scanf("%d", &num[i]);

	for (j = size - 1, i = 0; j >= 0, i < size; j--, i++)
		r_num[j] = num[i];

	printf("\n");

	for (j = 0; j < size; j++)
		printf("%d ", num[j]);
	printf("��(��) �Է��Ͽ����ϴ�.\n\n");
	printf("\n�̸� �Ųٷ� �ϸ� ");
	
	for (k = 0; k < size; k++)
		printf("%d ", r_num[k]);
	printf("�Դϴ�.\n\n");
	printf("��\n");

	return 0;

}
