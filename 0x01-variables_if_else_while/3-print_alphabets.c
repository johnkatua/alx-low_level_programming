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
	char chl;
	char chu;

	chl = 'a';
	while (chl <= 'z')
	{
		putchar(chl);
		chl++;
	}
	chu = 'A';
	while (chu <= 'Z')
	{
		putchar(chu);
		chu++;
	}
	putchar('\n');
	return (0);
}
