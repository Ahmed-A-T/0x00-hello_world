#include <stdio.h>

/**
 * main - main function just contain another function
 *
 * Return: Always returns 0.
*/
int main(void)
{
	/**
	 * print_alphabet - prints the alphabet, in lowercase
	 *
	 * Return: Dosen't returns anything
	 */
	void print_alphabet(void)
	{
		char ch = 'a';
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		putchar(10);
	}
	print_alphabet();

	return (0);
}
