#include <stdio.h>
/**
 * main - program to print number of argument
 * @argc: argument c
 * @argv: argument v
 * Return: anything
 */

int main(int argc, __attribute__((unused)) char *argv[])
{

	printf("%d\n", argc - 1);
	return (0);
}
