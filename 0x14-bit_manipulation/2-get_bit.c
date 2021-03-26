#include "holberton.h"

/**
 * git_bit - returns the value of a bit at a given index
 * @n: the number to check bits in
 * @index: index at which  to check bit
 * Return: returns value of bit or -1 incase of errors
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32 * 8 || !n)
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
