#include "holberton.h"
/**
 * _puts - It takes one argument
 * It prints a string
 * @str: string to be printed
 * Return: returns void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);

		_putchar('\n');
	}
}
