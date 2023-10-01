#include "main.h"

/**
 * _strlen_recursion - function to print length of a string
 * @s: pointer
 * Return: anything
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * comp_rec - a function to fill a memory with a byte
 * @s: byte a
 * @ln: length of byte
 * @i: parameter 1
 * Return: -
 */

int comp_rec(char *s, int ln, int i)
{

	if (i >= ln)
	{
		return (1);
	}
	if (*(s + i) != *(s + (ln - 1)))
	{
		return (0);
	}
	return (comp_rec(s, ln -1, i + 1));

}

/**
 * is_palindrome - fills a memory with bytes
 * @s: parameter to be used
 * Return: -
 */

int is_palindrome(char *s)
{

	int ln = _strlen_recursion(s);
	int i = 0;

	return (comp_rec(s, ln, i));
}
