#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ih, im, fh, fm;
	printf("� �ð��� �Է��Ͻÿ�: ");
	scanf("%d %d", &ih, &im);
	
	printf("� ���� �ð��� �Է��Ͻÿ�: ");
	scanf("%d %d", &fh, &fm);

	printf("��ð� = %d��", (fh - ih) * 60 + (fm - im));

	return 0;
}