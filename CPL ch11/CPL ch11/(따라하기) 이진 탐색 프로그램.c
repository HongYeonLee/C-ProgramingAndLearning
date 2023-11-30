#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�����ϱ� ���� Ž�� ���α׷�
int BinarySearch(int* A, int value, int low, int high) {
	int mid;

	if (high < low)
		return -1;
	else {
		mid = (low + high) / 2;
		if (A[mid] > value)
			return BinarySearch(A, value, low, mid - 1);
		else if (A[mid] < value)
			return BinarySearch(A, value, mid + 1, high);
		else
			return mid;
	}
}

int main(void) {
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key, loc;
	
	printf("key �Է�: ");
	scanf("%d", &key);
	loc = BinarySearch(a, key, 0, 9);
	if (loc == -1) // ���� �� =�� �ƴ϶� == �� �� ����
		printf("%d�� �����ϴ�.", key);
	else
		printf("key = %d, ��ġ = %d\n\n", key, loc);

	return 0;
}