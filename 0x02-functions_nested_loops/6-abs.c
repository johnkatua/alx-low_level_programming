#include "holberton.h"
/**
 * _abs - It takes one argument
 *@m: the integer to compute its absolute value
 *
 *Return: returns the absolute value
 */
int _abs(int m)
{
	int n = m;
	int absVal;

	if (n < 0)
	{
		n *= -1;
	}
	absVal = n;
	return (absVal);
}
