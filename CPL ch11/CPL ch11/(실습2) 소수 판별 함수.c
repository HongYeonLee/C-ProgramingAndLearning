#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {

	int i=2;

	if (n == 1)
		return 0; //1�� �Է¹����� 0 ��ȯ

	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0; //�Ҽ��� �ƴ϶�� 0 ��ȯ
	}
	return 1;
	
}

int main(){
	int num;
	printf("���� ���� = ");
	scanf("%d", &num);

	if (isPrime(num))
		printf("�Ҽ��Դϴ�.");
	else
		printf("�Ҽ��� �ƴմϴ�.");
}