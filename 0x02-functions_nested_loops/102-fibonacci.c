#include "holberton.h"
#include <stdio.h>
/**
 * main - prints first 50 numbers of the fibonacci sequence
 * Return: 0
 */
int main(void)
{
	int a, b;
	long v1, v2, next;

	v1 = 1;
	v2 = 2;
	b = 50;

	for (a = 0; a < b; a++)
	{
		if (a == 49)
			printf("%lu", v1);
		else
		{
			printf("%lu, ", v1);
			next = v1 + v2;
			v1 = v2;
			v2 = next;
		}
	}
	printf("\n");
	return (0);
}
