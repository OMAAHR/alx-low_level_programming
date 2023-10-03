#include "main.h"

/**
 * _strspn - function to be achieved
 * @s: string
 * @accept: parameter 2
 * Return: anything
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
			{
				n++;
				break;
			}
			else if (accept[c + 1] == '\0')
			{
				return (n);
			}
		}
		s++;

	}
	return (n);
}
