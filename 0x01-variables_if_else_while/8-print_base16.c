#include <stdio.h>
/**
 * main - Entry Point
 * return: Always0 (success)
 */
int main(void)
{
	int num;
	char bt;

	for (num = 0; num < 10; num++)
		putchar((num % '10') + '0');

	for (bt = 'a'; bt <= 'f'; bt++)
		putchar (bt);

	putchar('\n');

	return (0);
}
