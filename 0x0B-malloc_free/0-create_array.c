#include "holberton.h"
#include <stdio.h>
/**
 * create_array - It takes 2 arguments
 * It creates an array of chars, and initializes it with a specific char
 * @size: size of the array  to be created
 * @c: character to initialize the array
 * Return: returns pointer  to the array or NULL incase of errors
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
		return (NULL);
	b = malloc(size * sizeof(char));
	if (b == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		b[a] = c;
	}
	return (b);
}
