#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <ctype.h>
//실습3 2차원 평면의 점
typedef struct {
	int x, y;
} POINT;

int main() {
	POINT* p[100] = { NULL };
	int count = -1; //count를 0으로 초기화하려면 do while문에서 count++을 뒤에 쓰면 됨
	char y_or_n;
	do {
		count++;
		p[count] = (POINT*)malloc(sizeof(POINT));

		printf("좌표를 입력하시오(x좌표, y좌표 순으로): ");
		scanf("%d%d", &p[count]->x, &p[count]->y);

		printf("Do you want to continue? (y or n): ");
		getchar();
		scanf("%c", &y_or_n);

	} while (toupper(y_or_n) == 'Y');
	count++;

	printf("\n총 %d개의 포인트 좌표가 입력되었습니다. \n\n", count);

	for (int i = 0; i < count; i++) {

		if (p[i]->x > 0 && p[i]->y > 0)
			printf("좌표 (%d, %d)는 1사분면 입니다.\n", p[i]->x, p[i]->y);
		else if (p[i]->x < 0 && p[i]->y > 0)
			printf("좌표 (%d, %d)는 2사분면 입니다.\n", p[i]->x, p[i]->y);
		else if (p[i]->x < 0 && p[i]->y < 0)
			printf("좌표 (%d, %d)는 3사분면 입니다.\n", p[i]->x, p[i]->y);
		else if (p[i]->x > 0 && p[i]->y < 0)
			printf("좌표 (%d, %d)는 4사분면 입니다.\n", p[i]->x, p[i]->y);
		else
			printf("좌표 (%d, %d)는 원점입니다.\n", p[i]->x, p[i]->y);

	}
	printf("\n");

	for (int i = 0; count < i; i++) {
		free(p);
		p[i] = NULL;
	}

	return 0;

}