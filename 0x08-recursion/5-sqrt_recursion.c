#include "main.h"
/**
 *  _sqrt_recursion - function that returns a natural square
 *  @n: number for square
 *  Return: the result of the natural square
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 1));
}
/**
 * actual_sqrt_recursion - function to find the natural root a number
 * @n: number for the calculation
 * @i: parameter
 * Return: whatever necessary
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
