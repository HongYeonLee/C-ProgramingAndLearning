//실습8 각 과목 점수 평균 구하기
#include <stdio.h>

int main()
{
	int score[10][3] = {
		{70,80,-1},{-1,90,75},{90,90,-1},
		{90,75,95},{90,80,80},{70,60,65},
		{65,85,95},{-1,85,90},{95,-1,95},
		{95,85,-1}
	};
	double kSum = 0, eSum = 0, mSum = 0;

	for (int i = 0; i < 10; i++)
	{
		if (score[i][0] != -1)
			kSum += score[i][0];
		if (score[i][1] != -1)
			eSum += score[i][1];
		if (score[i][2] != -1)
			mSum += score[i][2];
	}

	printf("국어 시험 평균 = %.2f\n", kSum/10);
	printf("영어 시험 평균 = %.2f\n", eSum/10);
	printf("수학 시험 평균 = %.2f\n", mSum/10);

	return 0;

}