#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
//�ǽ�8 ����ڰ� ���ϴ��� ��� �� �ܾ� �Է� �޾� ��

//do while �� �̿�
int main()
{
	char word1[MAXSIZE], word2[MAXSIZE];
	char Y_or_N;
	do {
		printf("�� ���� �ܾ �Է��ϼ���.: ");
		scanf("%s", word1);
		scanf("%s", word2);

		if (strcmp(word1, word2) == 0)
			printf("�� �ܾ�� ������ �ܾ��Դϴ�.\n");
		else if (strlen(word1) == strlen(word2))
			printf("�� �ܾ�� �ٸ����� ���̰� �����ϴ�.\n");
		else
			printf("�� �ܾ�� �ٸ� �ܾ��̰�, ���̵� �ٸ��ϴ�.\n");

		getchar();
		printf("\n����ϱ⸦ ���մϱ�? (y or n): ");
		scanf("%c", &Y_or_N);
	} while (Y_or_N == 'y');

	return 0;
}
/*while ���� ���� �̿�
int main(void)
{
	char word1[MAXSIZE], word2[MAXSIZE];
	char Y_or_N;

	while (1)
	{
		printf("�ΰ��� �ܾ �Է��ϼ���.: ");

		scanf("%s", word1);
		scanf("%s", word2);

		if (strcmp(word1, word2) == 0)
			printf("�� �ܾ�� �����ϴ�.\n\n");
		else if (strlen(word1) == strlen(word2))
			printf("�� �ܾ�� �ٸ����� ���̴� �����ϴ�.\n\n");
		else
			printf("�� �ܾ�� �ٸ� ���̾��, ���̵� �ٸ��ϴ�.\n\n");

		getchar();
		printf("����ϱ� ���մϱ�? (y or n): ");
		scanf("%c", &Y_or_N);
		if (Y_or_N != 'y')
			break;
	}
}
