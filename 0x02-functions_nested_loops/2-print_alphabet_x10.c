#include "holberton.h"
/**
 * print_alphabet_x10 - It takes no arguments
 * Prints alphabets in lowercase ten times
 *
 * Return: On success 1
 */
void print_alphabet_x10(void)
{
	char m, n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
