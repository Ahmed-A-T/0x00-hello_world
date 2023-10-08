#include <stdio.h>

/**
 * prints all single digit numbers of base 10 starting from 0
 * Without use any variable of type char
 * Return: main function return 0;
*/
int main(void)
{
	int num;

	num = 48;
	while (num < 58)
	{
		putchar(num);
		num += 1;
	}
	putchar(10);

	return (0);
}
