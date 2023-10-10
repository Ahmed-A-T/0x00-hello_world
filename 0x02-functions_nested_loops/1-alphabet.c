#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: Dosen't returns anything
 */
void print_alphabet(void)
{
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar(10);
}
