#include "holberton.h"
/**
 * _puts - It takes one argument
 * It prints a string
 * @str: string to be printed
 * Return: returns void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
			i++;
	}
	_putchar('\n');
}
