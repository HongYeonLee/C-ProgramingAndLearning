//ch5 �ǽ�2 1���� �迭�� �ִ밪�� �ּڰ�
#include <stdio.h>

int main(void)
{
	double data[] = { 11.2, 2,123,1,-2,-4,5,12 }, min, max;
	int num = sizeof(data) / sizeof(double);
	min = max = data[0];

	for (int i = 1; i < num; i++)
	{
		if (min > data[i])
			min = data[i];

		if (max < data[i])
			max = data[i];
	}

	printf("�迭�� ����� ����\n");
	for (int j = 0; j < num; j++)
	{
		printf("%6.2f\n", data[j]);
	}
	printf("\n");
	printf("�ִ밪 : %f\n", max);
	printf("�ּڰ� : %f\n", min);
	printf("�ִ밪�� �ּҰ��� �� : %f", max - min);

	return 0;

}