#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lowercase x10
 *
 */

void print_alphabet_x10(void)
{

	int c;
	char t;

	for (c = 0; c < 10; c++)
	{
		for (t = 'a'; t <= 'z'; t++)

			_putchar(t);
		_putchar('\n');
	}
}	
