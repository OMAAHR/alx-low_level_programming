#include "main.h"
/**
 *rev_string - function that reverses a string
 *@s: parameter to reverse string
 *Return: 0
 */

void rev_string(char *s)
{

	int i;
	char j;
	int numb = 0;


	for (i = 0; s[i]; != '\0' i++)
		numb++

	for (i = 0;  i < numb / 2; i++)
	{

		j = s[i];
		s[i] = s[numb - 1 - i];
		s[numb - 1 - i] = j;

	}
}
