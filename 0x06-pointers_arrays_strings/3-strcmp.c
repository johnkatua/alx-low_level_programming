#include "holberton.h"
/**
 * _strcmp - It takes two arguments
 * It compares two strings
 * @s1: first argument
 * @s2: second argument
 * Return: returns an integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		*s1++;
		*s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}
