#include <stdio.h>
/**
 * main - entry
 * Description - program that prints different combinations
 * Return: 0
 */

int main(void)
{
	int l;
	int y;

	for (l = '0'; l <= '9'; l++)
	{
		for (y = '0'; y <= '9'; y++)
	{
		if (l < y)
	{
		putchar(l);
		putchar(y);
	if (l != '8' || (l == '8' && y != '9'))
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
		putchar('\n');
		return (0);
}
