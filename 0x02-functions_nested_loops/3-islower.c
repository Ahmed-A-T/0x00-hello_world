#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r, ch;

	int _islower(int c)
	{
		for (ch = 65; ch <= 90; ch++)
		{
			if (c == ch)
				return (1;
			else
				return 0;
		}
	}
	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
    	r = _islower(108);
    	putchar(r + '0');
    	putchar('\n');


	return (0);
}
