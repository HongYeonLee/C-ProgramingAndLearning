#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//�ǽ�3 �л� Ȯ�� ���α׷� (���ڿ� �迭 ���x)
int main()
{
	char name0[20] = "����ȭ";
	char name1[20] = "����ȭ";
	char name2[20] = "����ȭ";
	char student[20];

	printf("�л� �̸� �Է�: ");
	scanf("%s", student);

	if (strcmp(name0, student) == 0)
		printf("�츮 �� �л��Դϴ�.");
	else if (strcmp(name1, student) == 0)
		printf("�츮 �� �л��Դϴ�.");
	else if (strcmp(name2, student) == 0)
		printf("�츮 �� �л��Դϴ�.");
	else
		printf("�츮 �� �л��� �ƴմϴ�.");

	return 0;
}