#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	num1 = 48;
	num2 = 49;
	num3 = 50;
	while ((num1 < num2) && (num2 < num3))
	{
		while (num2 < num3)
		{
			while (num2 < num3)
			{
				if (num3 < 58)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if((num1 < 54) || (num3 < 56))
					{
						putchar(',');
						putchar(' ');
					}
					num3 += 1;
				}
				else
				{
					break;
				}
			}
			if (num2 < 57)
			{
				num2 += 1;
				num3 = num2 + 1;
			}
			else
			{
				break;
			}
		}
		if (num1 < 56)
		{
			num1 += 1;
			num2 = num1 + 1;
		}
		else
		{
			putchar(10);
			break;
		}
	}

	return (0);
}
