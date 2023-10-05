#include "main.h"
/**
 * _strdup - function to return a pointer
 * @str: pointer string
 * Return: pointer to new memory
 */


char *_strdup(char *str)
{

	char *c;
	int hold = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		hold++;
	}
	c = malloc(sizeof(char) * hold + 1);
	if (c == NULL)
	{
		return (NULL);
	}
		for (i = 0; str[i] != '\0'; i++)
	{
		c[i] = str[i];
	}
	return (c);
}
