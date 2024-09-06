/*
 * Filename: 101-print_number.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * print_number - prints an integer
 * @n: the numer want to print
 */
void print_number(int n)
{
	int divisor = 1, digit;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor >= 10)
		divisor *= 10;
	while (n != 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
