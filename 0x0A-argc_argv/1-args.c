#include "main.h"
#include <stdio.h>

/**
 * main - program that prints number of arguments
 * Owned By soumimoon
 * @argc: argument count
 * @argv: argument vector
 * Return: number
 */

int	main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
