#include "main.h"
/**
 * _strlen - function that prints a strin
 * @s: parameter to be printed
 * Return: lenght
 */


int _strlen(char *s)
{

	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}
