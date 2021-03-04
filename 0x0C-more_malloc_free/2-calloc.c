#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - It takes two parameters
 * It allocates memory for an array using malloc
 * @nmemb: number of elements in an array
 * @size: size of elements in bytes
 * Return: returns void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		ptr[a] = 0;
	return (ptr);
}
