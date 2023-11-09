#include <stdio.h>

int main() {
	int a[] = { 0,10,20,30,40,50,60,70,80,90 };
	int b[] = { 0,1,2,3,4,5,6,7,8,9 };
	int c[10] = { 0 };

	for (int k = 0; k < 10; k++) {
		c[k] = a[k] + b[k];
		printf("%d ", c[k]);
	}
}