#include "main.h"
/*
 * main - Entry Point
 * Description: Print alphabet in lowercase followed by a new line.
 * return: Always 0 (success)
 */
void print_alphabet(void)
{
	char lc;
	
	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar (lc);

	_putchar('\n');

}
