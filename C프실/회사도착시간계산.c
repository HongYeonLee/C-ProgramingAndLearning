#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ih, im, bm;
	printf("�� ��� �ð�: ");
	scanf("%d%d", &ih, &im);
	
	printf("���� �̿� �ð�: ");
	scanf("%d", &bm);

	im += bm;

	if (im>= 60)
	{
		ih++;
		im -= 60;
	}

	printf("ȸ�� ���� �ð� = %d�� %d���Դϴ�", ih, im);

	return 0;

}