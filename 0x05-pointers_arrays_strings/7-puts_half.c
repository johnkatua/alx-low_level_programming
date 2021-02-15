#include "holberton.h"
/**
 * puts_half - It takes one argument
 * It prints half a string
 * @str: Str value
 * Return: returns void
 */
void puts_half(char *str)
{
	int idx = 0, int len = 0, num;

	while (str[idx++])
		len++;

	if ((len / 2) == 0)
		num = len / 2;

	else
		num = (len + 1) / 2;

	for (idx = num; idx < len; idx++)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
}
