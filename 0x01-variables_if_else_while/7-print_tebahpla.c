#include <stdio.h>
/**
 * main - Entry Print alphabet in reverse
 * return: Always 0 (success)
 */
int main(void)
{
	char rv;

	for (rv = 'z'; rv <= 'a'; rv--)
		putchar(rv);

	putchar('\n');

	return (0);
}
