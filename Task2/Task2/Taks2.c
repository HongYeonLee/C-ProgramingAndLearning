#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define RANGE 101
#define MAXCLASS 5
#define MAXSTD 10
#define NUM_SCORE_BRAKET 10

int main(void)
{
	int i, j, m;
	int score[MAXCLASS][MAXSTD];
	int scoreDist[NUM_SCORE_BRAKET] = { 0 };
	int classScoreDist[MAXCLASS][NUM_SCORE_BRAKET] = { 0 };
	int totalMax = 0;
	int totalMin = 100;
	int highest[MAXCLASS] = { 0 };
	int lowest[MAXCLASS] = { 100 };
	int temp;
	int highFlag[MAXCLASS] = { 0 };
	int lowFlag[MAXCLASS] = { 0 };
	int avgFlag[MAXCLASS] = { 0 };
	double totalSum = 0, classSum = 0, totalAverage, average[MAXCLASS];
	srand((int)time(NULL));


	for (i = 0; i < MAXCLASS; i++)
	{
		for (j = 0; j < MAXSTD; j++)
		{
			score[i][j] = rand() % RANGE;
			totalSum += score[i][j];
			classSum += score[i][j];

			if (highest[i] < score[i][j])
				highest[i] = score[i][j];

			if (lowest[i] > score[i][j])
				lowest[i] = score[i][j];

			if (totalMax < score[i][j])
				totalMax = score[i][j];

			if (totalMin > score[i][j])
				totalMin = score[i][j];

			if (score[i][j] >= 0 && score[i][j] <= 10)
			{
				scoreDist[0]++;
				classScoreDist[i][0]++;
			}

			if (score[i][j] >= 11 && score[i][j] <= 20)
			{
				scoreDist[1]++;
				classScoreDist[i][1]++;
			}

			if (score[i][j] >= 21 && score[i][j] <= 30)
			{
				scoreDist[2]++;
				classScoreDist[i][2]++;
			}

			if (score[i][j] >= 31 && score[i][j] <= 40)
			{
				scoreDist[3]++;
				classScoreDist[i][3]++;
			}

			if (score[i][j] >= 41 && score[i][j] <= 50)
			{
				scoreDist[4]++;
				classScoreDist[i][4]++;
			}

			if (score[i][j] >= 51 && score[i][j] <= 60)
			{
				scoreDist[5]++;
				classScoreDist[i][5]++;
			}

			if (score[i][j] >= 61 && score[i][j] <= 70)
			{
				scoreDist[6]++;
				classScoreDist[i][6]++;
			}

			if (score[i][j] >= 71 && score[i][j] <= 80)
			{
				scoreDist[7]++;
				classScoreDist[i][7]++;
			}

			if (score[i][j] >= 81 && score[i][j] <= 90)
			{
				scoreDist[8]++;
				classScoreDist[i][8]++;
			}

			if (score[i][j] >= 91 && score[i][j] <= 100)
			{
				scoreDist[9]++;
				classScoreDist[i][9]++;
			}

		}
		average[i] = classSum / 10;
		classSum = 0;
	}

	totalAverage = (double)totalSum / 50;

	for (i = 0; i < NUM_SCORE_BRAKET; i++)
	{
		printf("%d구간에 속하는 학생 수 %d명\n", i, scoreDist[i]);
	}

	printf("\n최대값: %d점, 최소값: %d점, 평균: %.2f점\n\n", totalMax, totalMin, totalAverage);

	printf("정렬하기 전 점수 배치\n");
	for (i = 0; i < MAXCLASS; i++)
	{
		for (j = 0; j < MAXSTD; j++)
		{
			if (j % 5 == 0)
				printf("\n");
			printf("%4d", score[i][j]);
		}

		printf("\n");
	}

	printf("\n정렬한 후 점수 배치\n");
	
	for (m = 0; m<MAXCLASS; m++)
		for (i = MAXSTD - 1; i >= 0; i--)
			for (j = 0; j < MAXSTD-1; j++)
			{
				if (score[m][j] > score[m][j + 1])
				{
					temp = score[m][j];
					score[m][j] = score[m][j + 1];
					score[m][j + 1] = temp;
				}
			}

	for (i = 0; i < MAXCLASS; i++)
	{
		for (j = 0; j < MAXSTD; j++)
		{
			if (j % 5 == 0)
				printf("\n");
			printf("%4d", score[i][j]);
		}

		printf("\n");
	}
	printf("\n");
	for (i = 0; i < MAXCLASS; i++)
	{
		for (j = 0; j < NUM_SCORE_BRAKET; j++)
		{
			printf("%d번 분반 %d번 구간에 속하는 학생수: %d명\n", i, j, classScoreDist[i][j]);

		}
		printf("\n최고점: %d점, 최저점 : %d점, 평균 : %.2f점\n\n", highest[i], lowest[i], average[i]);
	}

	for (i = 0; i < MAXCLASS; i++)
		for (j = 0; j < MAXSTD; j++)
		{
			if (totalMax == score[i][j])
				highFlag[i] = 1;

			if (totalMin == score[i][j])
				lowFlag[i] = 1;

			if (average[i] <= totalAverage)
				avgFlag[i] = 1;
		}

	printf("전체 최고 점수가 속한 분반: ");
	for (i = 0; i < MAXCLASS; i++)
	{
		if (highFlag[i] == 1)
			printf("%d반 ", i);
	}

	printf("\n\n전체 최소 점수가 속한 분반: ");
	for (i = 0; i < MAXCLASS; i++)
	{
		if (lowFlag[i] == 1)
			printf("%d반 ", i);
	}
	
	printf("\n\n전체 평균에 못 미치는 분반: ");
	for (i = 0; i < MAXCLASS; i++)
	{
		if (avgFlag[i] == 1)
			printf("%d반 ", i);
	}
	printf("\n");
	return 0;


}