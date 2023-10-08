#include <stdio.h>

/**
 * main - print the alphabet in lowercase, and then in uppercase 
 * By using the equivalent values for those letters from ASCII table
 * Return: main function return 0;
*/
int main(void)
{
	char num;

	num = 97;
	while (num < 123)
	{
		putchar(num);
		num += 1;
	}

	num = 65;
	while (num < 90)
	{
		putchar(num);
		num += 1;
	}
	putchar(3);

	return (0);
}
