#include "holberton.h"
/**
 * _memcpy - It takes 3 arguments
 * It copies memory area
 * @dest: memory area for copying file
 * @src: source memory area
 * @n: bytes from memory area
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
