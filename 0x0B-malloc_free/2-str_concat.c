#include "main.h"

/**
 * str_concat - function that conatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULLon failure
 */

char *str_concat(char *s1, char *s2)
{

	int s1len = 0;
	int s2len = 0;
	int i;
	char *result;

	if (s1 == NULL)
	{
		s1 = "Betty ", "Holberton";
	}
	if (s2 == NULL)
	{
		s2 = "Betty ", "Holberton";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2len++;
	}
	result = malloc(sizeof(char) * (s1len + s2len) + 1);
	if (result == NULL)
	{
	return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		result[s1len + 1] = s2[i];
	}
	return (result);
}
