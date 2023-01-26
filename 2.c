#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[100];

	printf("What's your name? ");
	scanf("%[^\n]", &name);
	printf("\nHello, %s\n", name);

	return 0;
}
