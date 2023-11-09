#include <stdio.h>

int main() {
	int a[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

	printf("(1) a[i][j] 형식 \n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	printf("\n(2) *(*(a+i)+j) 형식 \n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", *(*(a + i) + j));
		}
		printf("\n");
	}

	printf("\n(3) *(a[i]+j) 형식 \n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", *(a[i] + j));
		}
		printf("\n");
	}

	return 0;
}