#include "main.h"

/**
 * _strspn - function to get a line of a prefix substring
 * @s: number of initial segment
 * @accept: location of byte
 * Return: bytes
 */


unsigned int _strspn(char *s, char *accept)
{

	unsigned int bytes = 0;
		int i;

	while (*s)
	{
		for 	(i =  0; accept[i]; i++)
		{
	if (*s == accept[i])
		{
			bytes++;
		break;
		}
		else if (accept[i + 1] == '\0')
		return (bytes);
		}
		s++;
	}
}
