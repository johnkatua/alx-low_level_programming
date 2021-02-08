#include "holberton.h"
/**
 * _islower - It takes one argument
 * It checks for lowercase characters
 *@c: checks if c contain lowercase character
 *
 * Return: 1 if c is lowercase else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
