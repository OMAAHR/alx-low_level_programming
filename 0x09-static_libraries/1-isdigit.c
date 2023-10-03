#include "main.h"
/**
 * _isdigit - function to check for a digit
 * @c: parameter to check for digits
 * Return: 1 or 0
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
