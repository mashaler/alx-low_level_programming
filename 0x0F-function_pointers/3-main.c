#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of simple operations.
 *  @argc: The number of arguments supplied to the program.
 *  @argv: An array of pointers to the arguments.
 *  Return: error if number of arguments is wrong.
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0, res = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* check if theres only one operator*/
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (s != '+' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[i]);
	b = atoi(argv[3]);
	print("%d\n", res);
}
