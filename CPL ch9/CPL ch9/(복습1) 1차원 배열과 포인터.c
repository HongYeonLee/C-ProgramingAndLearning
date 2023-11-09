#include <stdio.h>

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p;

	p = arr;
	for (int i = 0; i < 5; i++) {
		printf("ÁÖ¼Ò: (arr+i) = %p, (p+i) = %p, &arr[i] = %p, &p[i] =%p\n", arr + i, p + i, &arr[i], &p[i]);
		printf("°ª: arr[i] = %d, p[i] = &d, *(arr+i) = %d, *(p+i) = %d\n", arr[i], p[i], *(arr + i), *(p + i));
	}

	return 0;
}