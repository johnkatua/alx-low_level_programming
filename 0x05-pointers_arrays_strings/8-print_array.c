#include "holberton.h"
/**
 * print_array - It takes two arguments
 * It prints elements of an array
 * @a: array of integers
 * @n: number of elements to be printed
 * Return: returns void
 */
void print_array(int *a, int n)
{
	int idx = 0;

	while (idx < n)
	{
		printf("%d", a[idx]);

		if (idx < (n - 1))
		{
			printf(", ");
		}
		idx++;
	}
	printf('\n');
}
