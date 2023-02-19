#include <stdio.h>
/**
 * main - Entry Point
 * Description: Code to print out Capital and small alphabets.
 *return :Always 0 (success)
 */

int main(void)
{
char ac;
for (ac = 'a'; ac <= 'z'; ac++)
	putchar(ac);
for (ac = 'A'; ac <= 'Z'; ac++)
	putchar (ac);
putchar('\n');
return (0);


}
