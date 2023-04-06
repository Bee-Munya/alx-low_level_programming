#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @b: string
 * Return 0;
*/

void _print_rev_recursion(char *b)
{
	if (*b)
	{
		_print_rev_recursion(b + 1);
		_putchar(*b);
	}
}
