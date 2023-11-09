#include <stdio.h>
//실습3 포인터와 배열
int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p1 = a;
	int* p2 = &a[5];

	for (int i = 0; i < 5; i++) {
		printf("%d ", *(p1 + i));
	}

	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(p2 + i));
	}

	return 0;
}