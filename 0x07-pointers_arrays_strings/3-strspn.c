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
	unsigned int a, b, c = 0;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] != 32)
		{
			b = 0;
			while (accept[b] != '\0')
			{
				if (accept[b] == s[a])
				{
					c++;
				}
				b++;
			}
		}
		else
			return (c);
		a++;
	}
	return (c);
}
