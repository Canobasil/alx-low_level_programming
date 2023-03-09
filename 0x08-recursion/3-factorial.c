#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 *int n: given number
 *return: 0 (success) if factorial is less than 0 return -1(error)
 */
int factorial(int n)
{

		if (n == 0)
			return (1);
		if (n < 0)
			return (-1);
		return (n * factorial(n + 1));
}
