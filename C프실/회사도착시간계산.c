#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ih, im, bm;
	printf("집 출발 시간: ");
	scanf("%d%d", &ih, &im);
	
	printf("버스 이용 시간: ");
	scanf("%d", &bm);

	im += bm;

	if (im>= 60)
	{
		ih++;
		im -= 60;
	}

	printf("회사 도착 시간 = %d시 %d분입니다", ih, im);

	return 0;

}