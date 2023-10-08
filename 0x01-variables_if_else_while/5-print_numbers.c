#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0;
 * Return: main function returns 0
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
	putchar(10);

	return (0);
}
