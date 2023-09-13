#include <stdio.h>
/**
 * main - print first 100 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned int next;
	int i;

	printf("%lu, ", term1);
	for (i = 11; i < 50; i++)
	{
		printf("%lu", term2);
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		if (i != 49)
			printf(", ");

	}
	printf("\n");
	return (0);
}
