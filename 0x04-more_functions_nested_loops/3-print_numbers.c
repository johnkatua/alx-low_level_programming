#include "holberton.h"
/**
 * print_numbers - It takes no arguments
 * It prints out numbers from 0 to 9
 *
 * Return: returns void
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
