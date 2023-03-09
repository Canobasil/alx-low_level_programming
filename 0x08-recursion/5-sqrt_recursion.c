#include "main.h"
/**
 *_sqrt_recursion - a function the return the natural square root of a number.
 * @n: int variable
 * @i: iterator
 * return: resulting sqrt  0 if n doesn't have a root return -1
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i  == n)
		return (i);
	if (i * i  < n)
		return (-1);
	return (_sqrt_recursion(n, i + 1));
}
