#include <stdio.h>

/**
 * main - main function prints all possible different combinations of two digits
 * Return: main function returns 0
*/
int main(void)
{
	int num1, num2;

	num1 = 48;
	num2 = 49;
	while (num1 < num2)
	{
		while (num1 < num2)
		{
			putchar(num1);
			putchar(num2);
			putchar(44);
			putchar(32);
			if (num2 < 56)
				num2 += 1;
			else
				break;
		}
		if (num1 > 55)
		{
			putchar(10);
			break;
		}
		else
		{
			num1 += 1;
			num2 = num1 + 1;
		}
	}

	return (0);
}
