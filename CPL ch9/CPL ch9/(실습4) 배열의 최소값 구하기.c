#include <stdio.h>
//�ǽ�4 �迭�� �ּҰ� ���ϱ�
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

	printf("�ּҰ��� %d �̴�", small);

	return 0;
}