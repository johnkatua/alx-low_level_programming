#include "function_pointers.h"

/**
 * array_iterator - It executes function given as param of an array elements
 * @size: size of the array
 * @action: pointer to the function call
 * @array: array to be executed
 * Return: returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
