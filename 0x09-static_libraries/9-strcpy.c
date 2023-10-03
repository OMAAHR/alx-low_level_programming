#include "main.h"

/**
 * _strcpy - function to copy string
 * @dest: parameter 1
 * @src: parameter 2
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
	i++;
	}
	for (; j < i; j++)
	{
		dest[j] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
