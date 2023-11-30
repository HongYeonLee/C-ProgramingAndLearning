#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//실습13 사각형의 겹치는 부분의 면적 계산하기
char paper[100][100] = { 0 }; //전역변수로 2차원 배열 도화지 선언

void drawRectangle(int x, int y, int height, int width, int color) {//도화지에 입력받은 색을 칠하는 함수
	for (int i = x; i < x + height; i++)
		for (int j = y; j < y + width; j++) {
			paper[i][j] = color;
		}
}

int computeArea(int x, int y, int height, int width, int color) {//입력받은 색이 직사각형1에 있으면 카운트해주는 함수
	int area = 0;
	for (int i = x; i < x + height; i++)
		for (int j = y; j < y + width; j++) {
			if (paper[i][j] == color)
				area++;
		}
	return area;
} 

int main() {
	int x1, x2, y1, y2, height1, height2, width1, width2;
	printf("직사각형1 정보 (x, y, height, width순) 입력: ");
	scanf("%d%d%d%d", &x1, &y1, &height1, &width1);
	drawRectangle(x1, y1, height1, width1, 1);

	printf("직사각형2 정보 (x, y, height, width순) 입력: ");
	scanf("%d%d%d%d", &x2, &y2, &height2, &width2);
	drawRectangle(x2, y2, height2, width2, 2);

	printf("겹치는 면적: %d", computeArea(x1, y1, height1, width1, 2));

}



