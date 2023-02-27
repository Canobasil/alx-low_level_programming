#include "main.h"
/**
 *swap_int - swap variable value
 * *a: pointers
 * *b: pointers
 *
 *return: void
 *
 */
void swap_int(int *a, int *b)
{
	int o;

	o = *a;
	*a = *b;
	*b = o;

}
