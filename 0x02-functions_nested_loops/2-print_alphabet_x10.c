#include "stdio.h"

void print_alphabet_x10(void)
{
	int count = 0;
	char ch = 'a';

	for (count = 0; count <= 9; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar(10);
	}
