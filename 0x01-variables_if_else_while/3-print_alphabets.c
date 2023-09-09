#include <stdio.h>
/**
 * main - main function
 * Description - print upper and lowercase
 * Return: usually 0
 */

int main(void)
{

	char i;
	char T;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (T = 'A'; T <= 'Z'; T++)
	{
		putchar(T);
	}
	 putchar('\n');
	return (0);
}
