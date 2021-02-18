#include "holberton.h"
/**
 * reverse_array - It takes two arguments
 * It reverses the content of an array
 * @a: pointer to the array to be reversed
 * @n: size of the array
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
	int rev, b;

	for (b = n - 1; b >= n / 2; b--)
	{
		rev = a[n - 1 - b];
		a[n - 1 - b] = a[b];
		a[b] = rev;
	}
}
