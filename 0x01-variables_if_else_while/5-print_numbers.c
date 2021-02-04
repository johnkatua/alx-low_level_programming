#include <stdio.h>
/**
 * main - Entry point
 * Prints numbers from 0 to 10
 * It has no arguments
 *
 * Return: 0 incase of no errors
 */
int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
	{
		printf("%d\n", num);
		return (0);
	}
}
