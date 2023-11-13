#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
//실습2 2차원 배열의 동적 할당
int main() {
	int n; //행의 길이
	int(* p)[5]; //2차원 배열 1행을 가리키는 포인터 선언

	printf("배열 행의 길이 입력 : ");
	scanf("%d", &n);

	//2차원 배열 n행 5열짜리를 가리키는 포인터에 메모리 할당
	p = (int(*)[5])malloc(n * 5 * sizeof(int)); 


	printf("\n\n === 저장된 배열 ===  \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			p[i][j] = i * 10 + j;

			printf("%4d", p[i][j]);
		}
		printf("\n");
	}

	return 0;
}
