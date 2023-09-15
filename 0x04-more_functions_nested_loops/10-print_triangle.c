#include "main.h"
/**
 * print_triangle - print triangle
 * @size: functions to be worked with
 * Return: 0
 */

void print_triangle(int size)
{
	int i, c, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (n = size - n; n >= 1; n--)
			{
				_putchar(' ');
			}
			for (c = 1; c <= i; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
