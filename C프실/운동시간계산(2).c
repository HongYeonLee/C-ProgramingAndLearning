#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ih, im, fh, fm;
	printf("� ���� �ð�: ");
	scanf("%d %d", &ih, &im);
	
	printf("� ���� �ð�: ");
	scanf("%d%d", &fh, &fm);

	int dh, dm;

	dh = ((fh - ih) * 60 + (fm - im)) / 60;
	dm = ((fh - ih) * 60 + (fm - im)) % 60;

	if (dh == 0)
		printf("� �ð� = %d��", dm);
	else
		printf("� �ð� = %d�ð� %d��", dh, dm);

	return 0;
}