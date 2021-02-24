#include "holberton.h"
/**
 * factorial - It takes one argument
 * It returns the factorial of a given number
 * @n: The number to find its factorial
 * Return: returns the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
