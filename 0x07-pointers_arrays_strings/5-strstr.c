#include "main.h"
/**
 * _strstr - function that locates substrings
 * @haystack: occurance of the substring
 * @needle: location if yhe string
 * Return: NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)

{

	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i] == '\0')
					return (haystack);
				i++;
		} while (haystack[i] == needle[i]);
	}
			haystack++;
	}
		return ('\0');
}
