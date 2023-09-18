#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ih, im, fh, fm;
	printf("운동 시간을 입력하시오: ");
	scanf("%d %d", &ih, &im);
	
	printf("운동 종료 시간을 입력하시오: ");
	scanf("%d %d", &fh, &fm);

	printf("운동시간 = %d분", (fh - ih) * 60 + (fm - im));

	return 0;
}