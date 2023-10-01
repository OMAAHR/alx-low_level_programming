#include "main.h"

/**
 * is_prime_recursive - function to deter mine prime numbers
 * @n: parameter in use
 * @i: divisor of the function
 * Return: 1 if n is a prime, 0 if not
 */

int is_prime_recursive(int n, int i)
{

	if (n <= 1)
	return (0);
	if (i * i > n)
	return (1);
	if (n % i == 0)
		return (0);

	return (is_prime_recursive(n, i + 1));

}
/**
 * is_prime_number - function to find reccuring number
 * @n: parameter to be examined
 * Return: 1 if n is prime, or 0 if not
 */

int is_prime_number(int n)
{
	return
	(is_prime_recursive(n, 2));
}
