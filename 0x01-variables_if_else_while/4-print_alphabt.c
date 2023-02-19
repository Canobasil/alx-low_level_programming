#include <stdio.h>
/**
 * main - Entry Point
 * return: Always 0 (success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar (lc);
	}
	putchar('\n');

	return (0);
}
