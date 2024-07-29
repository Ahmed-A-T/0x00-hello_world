/*
 * Filename: 5-more_numbers.c
 * Author: Ahmed-A-T
 */

#include "main.h"

/**
 *  more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, digit;

	for (i = 0; i < 10; i++)
	{
		for (digit = 0; digit < 14; digit++)
		{
			if (digit > 9)
				_putchar('1');
			_putchar((digit % 10) + '0');
		}
		_putchar('0');
	}


}
