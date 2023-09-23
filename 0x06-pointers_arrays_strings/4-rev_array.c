#include "main.h"

/**
 * reverse_array- function that reverses an array
 * @a: first parametee
 * @n: number of elements
 * Return: anything
 */
void reverse_array(int *a, int n)
{

	int j, k;

	for (j = 0; j < n--; j++)
	{
		k = a[j];
		a[j] = a[n];
	a[n] = k;
	}

}
