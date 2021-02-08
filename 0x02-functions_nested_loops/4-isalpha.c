#include "holberton.h"
/**
 * _isalpha - It takes in one parameter
 *@c: it checks if the argument has an alphabetic character
 *
 *Return: 1 if c is a letter either uppercase or lowercase else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
