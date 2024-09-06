/*
 * Filename: 00-prime_factor.c
 * Author: Ahmed-A-T
 */

/**
 * main - inds and prints the largest prime factor of the number 612852475143.
 * Return: always return 0
 */
#include <stdio.h>

int main(void)
{
	int long digit = 612852475143;
	int i = 2;
	
	while (digit / i >= 1)
	{
		if (digit % i == 0)
		{
			digit /= i;
		}
		else
			i += 1;
	}
	printf("%d\n", i);

	return (0);
}
