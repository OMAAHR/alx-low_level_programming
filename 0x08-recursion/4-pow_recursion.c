#include "main.h"

/**
 *  _pow_recursion - function that returns valus of a character
 *  @x: parameter one
 *  @y: parameter two
 *  Return: value of x raised to y
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
		return (x *  _pow_recursion(x, y - 1));
}

