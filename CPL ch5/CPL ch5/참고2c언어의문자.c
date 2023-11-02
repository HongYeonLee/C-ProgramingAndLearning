#include <stdio.h>

int main()
{
	char cha = 'a', chb = 'b', chc = 'c';

	printf("%c %d \n", cha, cha);
	printf("%c %d \n", chb, chb);
	printf("%c %d \n", chc, chc);

	printf("\n");

	printf("%c %d \n", cha, cha);
	printf("%c %c \n", cha+1, cha+1);
	printf("%c %d \n", cha+2, cha+2);

	return 0;

}