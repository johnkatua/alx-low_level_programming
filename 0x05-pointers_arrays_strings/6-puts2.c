#include  "holberton.h"
/**
 * puts2 - It has only one parameter
 * It prints character of a string
 * @str: String whose characters are displayed
 * Return: returns void
 */
void puts2(char *str)
{
	int idx  = 0, len = 0;

	while (str[idx++])
		len++;

	for (idx = 0; idx < len; idx += 1)
	{
		_putchar(s[idx]);
	}
	_putchar('\n');
}
