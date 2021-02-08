#include "holberton.h"
/**
 *main - It takes no arguments
 *Prints out Holberton
 *
 *Return: 0 if succesful complied
 */
int main(void)
{
	char name[] = "Holberton";
	int index;

	for (index = 0; index <= 8; index++)
	{
		_putchar(name[index]);
	}
	_putchar("\n");
	return (0);
}
