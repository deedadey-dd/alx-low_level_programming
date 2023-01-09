#include "main.h"
#include <stdio.h>

/**
 * main - multiply two numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 1 if arg received 0 if not received
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);

		printf("%d\n", j);
	}
	return (0);
}
