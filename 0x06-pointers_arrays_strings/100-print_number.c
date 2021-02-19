#include "holberton.h"
/**
 *print_number - prints an integer.
 *only using the putchar function.
 *noarrays and pointers.
 *@n: integer to be printed.
 *
 *Return: void.
 */
void print_number(int n)
{
	unsigned int n1;
	/*check if number is negative*/
	n1 = n;
	if (n < 0)
	{
		_putchar(45);
		n1 = -n;
	}
	/* print number by recursion*/
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
