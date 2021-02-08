#include "holberton.h"
/**
 * print_alphabet - It takes no arguments
 * Prints all aphabet letters in lowercase
 * It does not return a value
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
