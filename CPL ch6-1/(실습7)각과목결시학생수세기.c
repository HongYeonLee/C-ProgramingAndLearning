//실습7 각 과목 결시 학생 수 세기
#include <stdio.h>

int main()
{
	int score[10][3] = {
		{70,80,-1},{-1,90,75},{90,90,-1},
		{90,75,95},{90,80,80},{70,60,65},
		{65,85,95},{-1,85,90},{95,-1,95},
		{95,85,-1}
	};

	int kCount = 0, eCount = 0, mCount = 0;

	for (int i = 0; i < 10; i++)
	{
		if (score[i][0] == -1)
			kCount++;
		if (score[i][1] == -1)
			eCount++;
		if (score[i][2] == -1)
			mCount++;
	}

	printf("국어 시험 결시 학생 수 = %d\n", kCount);
	printf("영어 시험 결시 학생 수 = %d\n", eCount);
	printf("수학 시험 결시 학생 수 = %d\n", mCount);

	return 0;

}