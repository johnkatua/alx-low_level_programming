#include <stdio.h>
/**
 * main - Entry point
 * Prints all the numbers of base 16 in lowercase
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int num;
	char hexadecimal[] = "123456789abcdef";

	for (num = 0; num < 16; num++)
	{
		putchar(hexadecimal[num]);
	}
	putchar('\n');
	return (0);
}
