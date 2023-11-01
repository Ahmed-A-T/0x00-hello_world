#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: how many arguments
 * @argv: array includes the arrguments
 *
 * Return: Always returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
