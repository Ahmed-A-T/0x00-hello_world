#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/* betty style doc for function main goes there */
/**
 * main - Checks if the generated randon number lower than, equal and greater than 0;
 * Return: 0;
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Your code goes here */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
