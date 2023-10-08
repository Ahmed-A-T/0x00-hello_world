#include <stdio.h>

/**
 * main - printing the alphabet in lowercase by converting 
 * the equivalent values from ASCII code
 * Return: main function returns 0;
*/
int main()
{
	char num;
	num = 97;
	
	while (num < 123)
	{
		putchar(num);
		num+=1;
	}
	putchar(10);

	return (0);
}
