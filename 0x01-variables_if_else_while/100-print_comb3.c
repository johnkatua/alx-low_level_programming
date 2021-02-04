#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 when successfully
 */
int main(void)
{
	int a, b = '0', c;

	for (a = '0'; a <= '9'; a++)
	{
		for (c = b; c <= '9'; c++)
		{
			if (a != c)
			{
				putchar(a);
				putchar(c);
			}
			if (a == c)
			{
				continue;
			}
			if (a == '8' && c == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
