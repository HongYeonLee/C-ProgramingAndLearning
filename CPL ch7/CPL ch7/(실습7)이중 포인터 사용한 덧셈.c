#include <stdio.h>
//�ǽ�7 ���� ������ ����� ����
int main()
{
	int x = 20, y = 30, z = 40;
	int* p = &x, * q = &y, * r = &z;
	int** pp = &p, ** qq = &q, ** rr = &r;

	printf("x + y + z = %d", **pp + **qq + **rr);

	return 0;
}