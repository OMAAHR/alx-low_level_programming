#include "main.h"

/**
 * _strpbrk - function that searches for a string
 * @s: parameter to be searched
 * @accept: second parameter
 * Return: NULL if byte is not found
 */


char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
		{

		for (i = 0; accept[i];   i++)
		{
		if (*s == accept[i])
			return (s);
		}
		s++;
		}
	return ('\0');
}
