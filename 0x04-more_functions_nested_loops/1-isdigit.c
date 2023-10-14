#include "main.h"

/**
 * _isdigit - Checks for a digit from 0 to 9
 *
 * Return: return 1 if the entered value is digit from 1 to 9
 * and returns 0 otherwise
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
