//2���� �迭�� ���, �ִ밪
#include <stdio.h>
int main()
{
	int data[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	int maxRow[3], maxTotal;
	double avgRow[3], avgTotal;
	double sumRow, sumTotal;
	int i=0;
	sumTotal = 0, maxTotal =data[0][0];
	for (i = 0; i < 3; i++)
	{
		sumRow = 0;
		maxRow[i] = data[i][0];
		for (int j = 0; j < 5; j++)
		{
			sumRow += data[i][j];
			sumTotal += data[i][j];

			if (maxRow[i] < data[i][j])
				maxRow[i] = data[i][j];

			if (maxTotal < data[i][j])
				maxTotal = data[i][j];

		}
		avgRow[i] = sumRow / 5;

	}
	avgTotal = sumTotal / 15;

	for (i=0; i < 3; i++)
	{
		printf("%d��° ���� ��հ�: %.2f\n", i, avgRow[i]);
		printf("%d���� ���� �ִ밪: %d\n\n", i, maxRow[i]);

	}
	printf("��ü ��հ�: %.2f\n", avgTotal);
	printf("��ü �ִ�: %d\nn", maxTotal);

	return 0;
}

