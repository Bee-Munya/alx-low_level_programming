#include "main.h"

/**
 * check - checks to see if number is prime
 * @p:int
 * @q:int
 * Return:int
 */
int check(int p, int q)
{
	if (q < 2 || q % p == 0)
		return (0);
	else if (p > q / 2)
		return (1);
	else
		return (check(p + 1, q));
}

/**
 * is_prime_number - states if number is prime
 * @k:int
 * Return:int
 */
int is_prime_number(int k)
{
	if (k == 2)
		return (1);
	return (check(2, k));
}
