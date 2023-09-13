#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 * Description: seperated by a coma
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long int term1 = 0, term2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = term1 + term2;
		printf("%lu", sum);

		term1 = term2;
		term2 = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
