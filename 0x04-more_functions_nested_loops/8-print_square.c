/*
 * Filename: 8-print_square.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 * print_square - Use the character # to print the square.
 * @size: the size of the square.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
