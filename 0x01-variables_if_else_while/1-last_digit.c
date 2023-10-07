#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Checks if the last digit of the random number
 * matching the following cases
 * if the last digit greater than 5;
 * if the last digit is equal to 0;
 * if the last digit is less than 6 and not 0;
 * Return: 0;
*/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else if ((digit < 6) && (digit != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);

	return (0);
}
