#include "main.h"

/**
 * _strcmp - funtion to compare two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * n: additional parameter
 * Return: nothing
 */
int _strcmp(char *s1, char *s2)
{

	int c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
	{
		return (s1[c] - s2[c]);
	}
		c++;
	}
	return (0);
}
