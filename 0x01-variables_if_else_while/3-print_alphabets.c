#include <stdio.h>

/**
 * main - It takes no arguments
 * Entry point
 * Prints both lowercase and uppercase alphabets
 *
 * Return: 0 when the code is successfully
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++
	}
	putchar('\n');
	return (0);
}
