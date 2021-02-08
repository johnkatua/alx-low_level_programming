#include "holberton.h"
/**
 * print_sign - It takes one parameter
 * @n: print the sign of the parameter n
 *
 * Return: 1 equals greater than 0, 0 n is zero, -1 equals less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
