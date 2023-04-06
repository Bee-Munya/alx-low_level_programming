#include "main.h"
/**
 * _pow_recursion - power
 * @a:int
 * @k:int
 * Return:int
 */

int _pow_recursion(int a, int k)
{
	if (k < 0)
	{
		return (-1);
	}
	else if (k != 0)
		return (a * _pow_recursion(a, k - 1));

	else
	{
		return (1);
	}
}
