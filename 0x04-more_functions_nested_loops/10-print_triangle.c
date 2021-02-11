#include "holberton.h"
/**
 * print_triangle - It takes one argument
 * @size: triangle dimensions
 *
 * Return: returns void
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int a, b, c;

		for (a = (size - 1); a >= 0; a--)
		{
			for (b = 1; b <= a; b++)
			{
				_putchar(' ');
			}
			for (c = 0; c < (size - 1); c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
