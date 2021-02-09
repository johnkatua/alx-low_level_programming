#include "holberton.h"
/**
 *main - It takes no arguments
 *Prints out Holberton
 *
 *Return: 0 if succesful complied
 */
int main(void)
{
	char a[] = "Holberton";
	int b;

	for (b = 0; b < 9; b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');
	return (0);
}
