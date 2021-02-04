#include <stdio.h>
/**
 * main - Entry point
 * Prints all single digits of base 10 starting from 0
 *
 * Return: 0 when is successfully compiled
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
