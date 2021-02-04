#include <stdio.h>
/**
 * main - Prints alphabets in lowercase
 * It takes no arguments
 *
 * Return: 0 if it complied successfully
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
	putchar('\n');
	return (0);
}
