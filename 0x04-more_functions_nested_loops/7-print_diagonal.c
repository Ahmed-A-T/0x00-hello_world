/*
 * Filename: 7-print_diagonal.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (n > 1)
			{
				_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
