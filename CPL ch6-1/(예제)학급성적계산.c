#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 국어
int main()
{
	int score[2][3];
	double sum = 0, avg;
	printf("학생 두명의 국어, 영어, 수학 점수를 국어, 영어, 수학 순으로 입력하시오: ");
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &score[i][j]);

	for (int j = 0; j < 2; j++)
	{
		sum += score[j][0];
	}

	avg = sum / 2;
	printf("국어 성적의 평균은 %.2f점이다", avg);

	return 0;

}
*/
/* 영어
int main()
{
	int score[2][3];
	double sum = 0, avg;
	printf("학생 두명의 국어, 영어, 수학 점수를 국어, 영어, 수학 순으로 입력하시오: ");
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &score[i][j]);

	for (int j = 0; j < 2; j++)
	{
		sum += score[j][1];
	}

	avg = sum / 2;
	printf("영어 성적의 평균은 %.2f점이다", avg);

	return 0;

}
*/

/*각 학생의 전체 평균
int main()
{
	int score[2][3];
	double sum = 0, avg;
	printf("학생 두명의 국어, 영어, 수학 점수를 국어, 영어, 수학 순으로 입력하시오: ");
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &score[i][j]);

	for (int i = 0; i < 2; i++)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		avg = sum / 3;
		printf("학생 %d의 전체 평균은 %.2f점이다\n", i, avg);
	}




	return 0;

}
*/

int main()
{
	int score[2][3];
	double sum = 0, avg;
	printf("학생 두명의 국어, 영어, 수학 점수를 국어, 영어, 수학 순으로 입력하시오: ");
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &score[i][j]);

	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		for (int j = 0; j < 2; j++)
		{
			sum += score[j][i];
		}
		avg = sum / 2;
		printf("과목 %d의 전체 평균은 %.2f점이다\n", i, avg);
	}

	return 0;
}