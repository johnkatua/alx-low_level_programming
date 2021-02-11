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
		for (a = 0; a <= size; a++)
		{
			for (b = 0; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
