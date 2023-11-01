#include <stdio.h>

/**
 * main - print the program name
 * @argc: how many arguments that the program takes
 * @argv: a pointer that points to the program arguments
 *
 * Return: Always returns 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}
