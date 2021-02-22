#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - It takes 2 arguments
 * It gets the length of a prefix substring
 * @s: pointer to string
 * @accept: substring checked
 * Return: returns number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			break;
	}
	return (a);
}
