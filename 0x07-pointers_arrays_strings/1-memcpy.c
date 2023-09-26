#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: active prototype
 * @src: another prototype
 * @n: vaiable
 * Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i  = 0;

	while (i < n)
	{
	dest[i] = src[i];
			i++;
	}
	return (dest);
}
