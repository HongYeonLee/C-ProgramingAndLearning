#include <stdio.h>

int main() {
	int a[] = { 0,10,20,30,40,50,60,70,80,90 };
	int b[] = { 0,1,2,3,4,5,6,7,8,9 };
	int c[10] = { 0 };

	int* p = a;
	int* q = b;
	int* r = c;

	/*
	for (int k = 0; k < 10; k++) {
		r[k] = p[k] + q[k];
		printf("%d ", r[k]);
	}*/

	for (int k = 0; k < 10; k++) {
		*(r + k) = *(p + k) + *(q + k);
		printf("%d ", *(r + k));
	}

	return 0;
}