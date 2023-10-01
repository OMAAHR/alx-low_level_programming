#include "main.h"
/**
 *  cal_sqrt - function that returns a natural square
 *  @n: number for square
 *  @guess: guess of square
 *  Return: 0 or -1
 */

int cal_sqrt(int n, int guess)
{

	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
	return (cal_sqrt(n, guess + 1));
	}
}
/**
 * _sqrt_recursion - function to find the natural root a number
 * @n: number for the calculation
 * Return: whatever necessary
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
	return (cal_sqrt(n, 1));
	}
}
