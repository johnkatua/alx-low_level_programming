#include "holberton.h"
/**
 * _print_rev_recursion - It takes one argument
 * It prints a string in reverse
 * @s: pointer to the string reversed
 * Return: returns void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
