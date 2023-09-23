#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string
 * @s: pointer
 * Return: *s
 */

char *rot13(char *s)
{

	int i, j;

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0;  j < 52; j++)
		{
		if (s[i] == data[j])
		{
			s[i] = rot[j];
		break;
		}
		}
	}
	return (s);
}
