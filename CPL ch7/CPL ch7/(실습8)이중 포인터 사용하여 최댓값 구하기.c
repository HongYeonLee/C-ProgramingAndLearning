#include <stdio.h>
//�ǽ�8 ���� ������ ����Ͽ� �ִ� ���ϱ�
int main()
{
	int a = 30, b = 10, c = 20;
	int* p1 = &a, * q1 = &b, * r1 = &c;
	int** p2 = &p1, ** q2 = &q1, ** r2 = &r1;

	int max;
	
	max = **q2;
	if (max < **p2)
		max = **p2;
	else if (max < **r2)
		max = **r2;

	printf("�ִ밪 = %d\n", max);
	
	return 0;
}