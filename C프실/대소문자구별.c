#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char word;
	printf("enter the word: ");
	scanf("%c", &word);

	if ('A' <= word && word <= 'Z')
		printf("capital");
	else if ('a' <= word && word <= 'z')
		printf("not capital");

	else
		printf("not a word");

	return 0;

}