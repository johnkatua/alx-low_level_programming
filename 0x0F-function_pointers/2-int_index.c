#include "function_holberton.h"

/**
 * int_index - It searches for an integer
 * @array: array with the elements
 * @size: size of the array
 * @cmp: pointer function to compare the elements
 * Return: returns index of the found index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a, b;

	if (size > 0 && array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			b = cmp(array[a]);
			if (b)
				break;
		}
		if (a < size)
			return (a);
	}
	return (-1);
}
