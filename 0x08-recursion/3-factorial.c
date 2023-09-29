#include "main.h"
/**
 *factorial - function that returns a number
 *@n: parameter for the function
 *Return: factorial of n
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n + factorial(n - 1));
}
