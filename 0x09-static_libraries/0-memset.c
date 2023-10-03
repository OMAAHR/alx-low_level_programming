#include "main.h"
/**
 **_memset - funtion to be checked
 * @s: 1st parameter
 * @b: 2nd parameter
 * @n: additional parameter
 *Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
