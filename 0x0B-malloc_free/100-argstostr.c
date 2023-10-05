#include "main.h"
/**
 * argstostr - function to concatenate all arg
 * @ac: parameter 1
 * @av: parameter2
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	char *c;
	int m = 0, n = 0, p = 0, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			len++;
	}
	len += ac;

	c = malloc(sizeof(char) * len + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		{
			c[p] = av[m][n];
			p++;
		}
		if (c[p] == '\0')
		{
		c[p++] = '\n';
		}
	}
	return (c);

}
