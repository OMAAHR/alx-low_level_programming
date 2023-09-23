#include "main.h"

/**
 *string_toupper - function thatchanges lowercase to uppercase
 *@s: pointer for the change
 *Return: s
*/

char *string_toupper(char *s)
{

	int c;

	c = 0;
	while (s[c] != '\0')
	{
	if (s[c] >= 'a' && s[c] <= 'z')
			s[c] = s[c] - 32;
		c++;
	}
	return (s);
}
