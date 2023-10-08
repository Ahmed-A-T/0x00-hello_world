#include <stdio.h>

/**
 * main - main function prints the lowercase alphabet in reverse
 * Return: main function returns 0;
*/
int main(void)
{
	char num;

	num = 122;
	while (num > 96)
	{
		putchar(num);
		num -= 1;
	}
	putchar(10);

	return (0);
}
