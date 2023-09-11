#include <stdio.h>
/**
 * main - entry
 * Description - showing exceptions
 * Return: 0
 */

int main(void)
{
	int i;
	int t;
	int h;

	for (h = '0'; h <= '9'; h++)
	{
		for (t = '0'; t <= '9'; t++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (!((i == t) || (t == h) ||

				(t > i) ||
			(h > t)))
			{
				putchar(h);
				putchar(t);
				putchar(i);
				if (!(i == '9' && h == '7' && t == '8'))
				{
					putchar(',');
					putchar(' ');
					}

				}
			}
			}
	}
	putchar('\n');
	return (0);
}
