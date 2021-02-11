#include <stdio.h>
/**
 * main - It takes no values
 * It finds and prints the largest prime factor of the number 612852475143
 *
 * Return: returns void
 */
int main(void)
{
	int a = 2;
	long num = 612852475143;

	while (a < num)
	{
		while (num % a == 0)
		{
			if (num == 1)
			{
				break;
			}
			num /= a;
		}
		a++;
	}
	printf("%lu\n", num);
	return (0);
}
