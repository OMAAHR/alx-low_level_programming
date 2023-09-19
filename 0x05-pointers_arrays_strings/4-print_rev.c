#include "main.h"
/**
 * print_rev - function to print a reverse string
 * @s: variable in use
 * Return: 0
 */

void print_rev(char *s)
{

	int c;
	int numb = 0;

	for (c = 0; s[c] != '\0'; c++)
		numb++;
	for (c = numb - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
