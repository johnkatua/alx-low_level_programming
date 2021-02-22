#include "holberton.h"
/**
 * _memset - It takes 3 arguments
 * It fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: The constant byte
 * @n: Numbers of bytes to fill
 * Return: Pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	char *c = (char *)s;

	for (a = 0; a < n; a++)
	{
		c[a] =  b;
	}
	return (c);
};
