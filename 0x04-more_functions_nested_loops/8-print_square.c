#include "holberton.h"
/**
 * print_square - It takes one argument
 * @size: Dimension of the square
 * It prints out the square
 *
 * Return: returns void
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('\n');
			}
			_putchar('\n');
		}
	}
}
