#include "main.h"

/**
 * pow -  a function that returns the value of x raised to the power of y.
 * @x: int  variable
 * @y: power  int variable
 * return: 0 else if y is less than 0 return -1
 */
int _pow_recursion(int, int y)
{
	int x;
	int y;
	{
		if (y == 0)
			return (1);
		if (y < 0)
			return (-1);
		return (x * _pow_recursion(x, y - 1));
	}
}
