#include <stdio.h>

/**
 * main - Prints the number of arguments 
 *
 * @argc: How many arguments passed to the program
 * @argv: a pointer to an array that includes the arguments
 *
 * Return: Always returns 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv = &(*argv);

	return (0);	
}
