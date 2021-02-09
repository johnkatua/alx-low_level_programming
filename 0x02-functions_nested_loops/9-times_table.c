#include "holberton.h"
/**
 * times_table - the function does not return a value
 * It prints the 9 times table
 *
 * Return: It returns void
 */
void times_table(void)
{
	int m, n, output;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			output = m * n;

			if (n == 0)
			{
				_putchar(48 + output);
			}
			else if (output >= 10)
			{
				_putchar(' ');
				_putchar(48 + (output / 10));
				_putchar(48 + (output % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + output);
			}
			if (n != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
