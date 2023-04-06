
#include "main.h"
/**
 * _strlen_recursion - length of string
 * @b:string
 * Return:int
 */
int _strlen_recursion(char *b)
{
	int a = 0;

	if (*b)
	{
		a++;
		a += _strlen_recursion(b + 1);

	}
	return (a);
}
