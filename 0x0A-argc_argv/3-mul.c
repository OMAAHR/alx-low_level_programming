#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multiply numbers
 * @argc: argument c
 * @argv: argument v
 * Return: whatever
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 2)
	{
		printf("ERROR\n");
		return (1);
	}
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
	return (0);
}
