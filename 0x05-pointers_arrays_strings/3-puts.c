#include "main.h"
/**
 * _puts - this function will print a string
 * @str: variable for printing the string
 * Return 0
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		_putchar(str[c]);

	_putchar('\n');
}
