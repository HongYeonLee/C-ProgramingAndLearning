#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ǽ�13 �簢���� ��ġ�� �κ��� ���� ����ϱ�
char paper[100][100] = { 0 }; //���������� 2���� �迭 ��ȭ�� ����

void drawRectangle(int x, int y, int height, int width, int color) {//��ȭ���� �Է¹��� ���� ĥ�ϴ� �Լ�
	for (int i = x; i < x + height; i++)
		for (int j = y; j < y + width; j++) {
			paper[i][j] = color;
		}
}

int computeArea(int x, int y, int height, int width, int color) {//�Է¹��� ���� ���簢��1�� ������ ī��Ʈ���ִ� �Լ�
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
	printf("���簢��1 ���� (x, y, height, width��) �Է�: ");
	scanf("%d%d%d%d", &x1, &y1, &height1, &width1);
	drawRectangle(x1, y1, height1, width1, 1);

	printf("���簢��2 ���� (x, y, height, width��) �Է�: ");
	scanf("%d%d%d%d", &x2, &y2, &height2, &width2);
	drawRectangle(x2, y2, height2, width2, 2);

	printf("��ġ�� ����: %d", computeArea(x1, y1, height1, width1, 2));

}



