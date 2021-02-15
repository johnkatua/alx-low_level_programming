#include "holberton.h"
/**
 * print_rev - It takes one argument
 * It prints a string in reverse
 * @s: string to be printed
 * Return: return void
 */
void print_rev(char *s)
{
	int a, b;

	while (*(s + a) != 0)
	{
		a++;
	}
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
