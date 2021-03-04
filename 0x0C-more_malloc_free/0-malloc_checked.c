#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - It takes one argument
 * It allocates memory using malloc
 * @b: memory to allocate
 * Return: returns pointer to the allocated memory or normal process termination
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
