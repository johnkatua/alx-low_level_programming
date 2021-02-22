#include "holberton.h"
/**
 * _strpbrk - It takes two arguments
 * It searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 * Return: returns pointer to byte in s and NULL if no much
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (accept[b])
			return (s + a);
	}
	return (0);
}
