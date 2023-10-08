#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers 
 * Return: main function returns 0;
*/
int main(void)
{
	char num;

	num = 48;
	while (num < 58)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
		num += 1;
	}
	putchar(10);

	return (0);
}
