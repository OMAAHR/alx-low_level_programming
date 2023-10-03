#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 * @n: last parameter
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{

	int j, k;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k  = 0;
	while (k < n && src[k] != '\0')
	{
		dest[j] = src[k];
		k++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
