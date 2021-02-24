#include "holberton.h"
/**
 * _puts_recursion - It takes one argument
 * It prints a string followed by a new line
 * @s: String to be printed
 * Return: returns void
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
