

#include "main.h"

/**
 * check - checks for the square root
 * @z:int
 * @q:int
 *
 * Return: int
 */
int check(int z, int q)
{
	if (z * z == q)
		return (z);
	if (z * z > q)
		return (-1);
	return (check(z + 1, q));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @p: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int p)
{
	if (p == 0)
		return (0);
	return (check(1, p));
}
