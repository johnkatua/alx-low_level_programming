#include <stdio.h>

/**
 * main - Entry point
 * It takes no arguments
 * Prints all alphabets in lowercase expect q and e
 *
 * Return: 0 if the code has no errors
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
