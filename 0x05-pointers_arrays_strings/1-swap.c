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
	*a  += *b;
	*b = *a - *b;
	*a = *a - *b;

}
