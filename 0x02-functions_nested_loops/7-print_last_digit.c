#include "holberton.h"
/**
 * print_last_digit - It takes an argument
 * @num: number to print the last digit
 *
 * Return: It returns the last digit
 */
int print_last_digit(int num)
{
	int ld;

	ld = num % 10;
	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');
	return (ld);
}
