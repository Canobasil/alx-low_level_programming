#include "main.h"

/**
 * _strstr - Finds the first occurrence of the string
 *@haystack: input
 *@needle: input
 * return: to beginning else null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *d = needle;

		while (*l == *d && *d != '\0')
		{
			l++;
			d++;
		}
		if (*d == '\0')
			return (haystack);
	}
	return (0);
}
