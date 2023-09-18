#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ih, im, fh, fm;
	printf("운동 시작 시각: ");
	scanf("%d %d", &ih, &im);
	
	printf("운동 종료 시각: ");
	scanf("%d%d", &fh, &fm);

	int dh, dm;

	dh = ((fh - ih) * 60 + (fm - im)) / 60;
	dm = ((fh - ih) * 60 + (fm - im)) % 60;

	if (dh == 0)
		printf("운동 시간 = %d분", dm);
	else
		printf("운동 시간 = %d시간 %d분", dh, dm);

	return 0;
}