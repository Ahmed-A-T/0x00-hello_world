#include <stdio.h>

/**
 * main - main function prints all the numbers of base 16 in lowercase
 * Return: main function return 0;
*/
int main(void)
{
	char num;

	num = 48;
	while (num < 58)
	{
		putchar(num);
		num += 1;
	}

	num = 97;
	while (num < 103)
	{
		putchar(num);
		num += 1;
	}
	putchar(10);

	return (0);
}
