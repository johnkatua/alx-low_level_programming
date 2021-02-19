#include "holberton.h"
/**
 * print_number - It takes one argument
 * It prints an integer
 * @n: The integer
 * Return: returns void
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
		_putchar(45);
		n1 = -n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 / 10) + '0');
}
