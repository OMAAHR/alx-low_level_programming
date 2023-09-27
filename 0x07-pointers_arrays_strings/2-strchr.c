#include "main.h"
/**
 **_strchr - function that locates a character in a string
 *@s: locating the size of a string
 *@c: locate character in a string
 *Return: NULL if character is not found
 */


char *_strchr(char *s, char c)
{

	int i;

	for (i = 0;   s[i]  >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
