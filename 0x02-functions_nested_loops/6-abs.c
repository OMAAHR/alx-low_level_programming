#include "main.h"

/**
 * _abs - function that finds absolute value of an integer
 * @c: function parameter
 * Return: -c or c
 */

int _abs(int c)
{
	if (c < 0)
		return (-c);
	else if (c >= 0)
	{
		return (c);
	}

	return (0);
}
