//�ǽ�4 2���� �迭�� ����
#include <stdio.h>

int main()
{
	double A[2][3] = { 1.2, 2, 4, 3, 6, 7 }, B[2][3];


	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
		{
			B[i][j] = A[i][j];
			printf("%.2f ", B[i][j]); //%f�� ��Ÿ���� �� ���
		}

	return 0;

}