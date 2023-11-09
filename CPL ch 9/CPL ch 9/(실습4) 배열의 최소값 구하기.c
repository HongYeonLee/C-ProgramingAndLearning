#include <stdio.h>
//실습4 배열의 최소값 구하기
int main() {
	int a[] = { 40,25,45,50,5,20,10,15,35,30 };
	int small = a[0];
	int* p = &a[0];

	/*for (int i = 0; i < 10; i++) {
		if (small > a[i])
			small = a[i];
	}*/

	for (int i = 0; i < 5; i++) {
		if (small > p[i])
			small = p[i];
	}

	printf("최소값은 %d 이다", small);

	return 0;
}