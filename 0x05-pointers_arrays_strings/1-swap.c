#include "main.h"
/**
 * swap_int - function that swaps values of two integers
 * @a: first parameter for swap
 * @b: second parameter
 * Return: 0
 */

void swap_int(int *a, int *b)
{

	int temp = *a;
	*a = *b;
	*b =  temp;
}
