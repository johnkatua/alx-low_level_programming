#include "holberton.h"
/**
 * print_most_numbers - It takes no arguments
 * It prints numbers from 0 to 9 excluding 2 and 4
 *
 * Return: returns void
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
		{
			continue;
		}
		else
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
