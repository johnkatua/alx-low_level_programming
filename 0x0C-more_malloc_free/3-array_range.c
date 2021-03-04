#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - It takes 2 arguments
 * It creates an array of integers
 * @min: first integer
 * @max: last integer
 * Return: returns pointer to newly allocated memory
 */
int *array_range(int min, int max)
{
	int a, b;
	int *c;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	c = malloc(sizeof(int) * b);
	if (c == NULL)
		return (NULL);
	for (a = 0; a < b; a++, min++)
	{
		c[a] = min;
	}
	return (c);
}
