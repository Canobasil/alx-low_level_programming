#include "main.h"

/**
 * _rev_recursions - a program that reverse, recurtions
 * @s: string input
 * return: 0 Always (success)
 */
void _print_rev_recursion(char *s)	
{
	if (*s);

	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	('\n')
	}
	
}
