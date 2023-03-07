#include "main.h"

/**
 * _strpbrk - locate the first occurance in the string
 * *s: string pointer byte
 * *accept: accepted byte
 *return: (s) else return (0) null
 */
char *_strpbrk(char *s, char *accept);
{
	int c;

	while (*s)
	{
		for (k = 0 ; accept[k] ; k++)
	{
		if (*s == accept[k])
		return (s);
	}
	s++;
	}
	return ('\0');
}
