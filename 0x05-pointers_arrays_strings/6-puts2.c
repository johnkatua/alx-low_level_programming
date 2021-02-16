#include  "holberton.h"
/**
 * puts2 - It has only one parameter
 * It prints character of a string
 * @str: String whose characters are displayed
 * Return: returns void
 */
void puts2(char *str)
{
	int idx  = 0;

	while (*(str + idx)
	{
		_putchar(*(str + idx));
		idx += 2;
	}
	_putchar('\n');
}
