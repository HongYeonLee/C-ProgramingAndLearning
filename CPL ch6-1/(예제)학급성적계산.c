#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ����
int main()
{
	int score[2][3];
	double sum = 0, avg;
	printf("�л� �θ��� ����, ����, ���� ������ ����, ����, ���� ������ �Է��Ͻÿ�: ");
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &score[i][j]);

	for (int j = 0; j < 2; j++)
	{
		sum += score[j][0];
	}

	avg = sum / 2;
	printf("���� ������ ����� %.2f���̴�", avg);

	return 0;

}
*/
/* ����
int main()
{
	int score[2][3];
	double sum = 0, avg;
	printf("�л� �θ��� ����, ����, ���� ������ ����, ����, ���� ������ �Է��Ͻÿ�: ");
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &score[i][j]);

	for (int j = 0; j < 2; j++)
	{
		sum += score[j][1];
	}

	avg = sum / 2;
	printf("���� ������ ����� %.2f���̴�", avg);

	return 0;

}
*/

/*�� �л��� ��ü ���
int main()
{
	int score[2][3];
	double sum = 0, avg;
	printf("�л� �θ��� ����, ����, ���� ������ ����, ����, ���� ������ �Է��Ͻÿ�: ");
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &score[i][j]);

	for (int i = 0; i < 2; i++)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		avg = sum / 3;
		printf("�л� %d�� ��ü ����� %.2f���̴�\n", i, avg);
	}




	return 0;

}
*/

int main()
{
	int score[2][3];
	double sum = 0, avg;
	printf("�л� �θ��� ����, ����, ���� ������ ����, ����, ���� ������ �Է��Ͻÿ�: ");
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &score[i][j]);

	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		for (int j = 0; j < 2; j++)
		{
			sum += score[j][i];
		}
		avg = sum / 2;
		printf("���� %d�� ��ü ����� %.2f���̴�\n", i, avg);
	}

	return 0;
}