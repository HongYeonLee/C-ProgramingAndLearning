#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ǽ�1 2���� ����� ��
typedef struct
{
	int x, y;
}point;

int main()
{
	point p;
	printf("��ǥ�� �Է��Ͻʽÿ�\n");

	printf("x : ");
	scanf("%d", &p.x);

	printf("y : ");
	scanf("%d", &p.y);

	if (p.x > 0)
	{
		if (p.y > 0)
			printf("�� 1��и� �Դϴ�.");
		else
			printf("�� 4��и� �Դϴ�.");
	}
	else
	{
		if (p.y > 0)
			printf("�� 2��и� �Դϴ�.");
		else
			printf("�� 3��и� �Դϴ�.");
	}

	return 0;

}