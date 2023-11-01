#include <stdio.h>

/**
 * main - print the program name
 *
 * @argc: how many arguments that the program takes
 * @*argv: a pointer that points to the program arguments
 */
int main(int argc, int *argv[])
{
	printf("%s", argv[0]);

	return (0);
}
