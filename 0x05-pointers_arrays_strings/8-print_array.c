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
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", a[idx]);

		if (idx == n - 1)
		{
			continue;
		}
		printf(', ');

	}
	printf('\n');
}
