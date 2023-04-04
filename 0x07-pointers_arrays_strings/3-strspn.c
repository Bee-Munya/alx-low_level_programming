#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0, b, p;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] != 32)
		{
			for (p = 0; accept[p] != '\0'; p++)
			{
				if (s[b] == accept[p])
					x++;
			}
		}
		else
			return (x);
	}
		return (x);

}
