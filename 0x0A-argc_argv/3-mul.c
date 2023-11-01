#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: the array includes arguments
 *
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);

	return (0);
}
