#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "abc";
	char str2[10] = "";

	printf("str1의 길이 = %d\n", (int)strlen(str1));
	printf("str2의 길이 = %d\n", (int)strlen(str2));

	return 0;
}