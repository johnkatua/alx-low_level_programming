#include "holberton.h"
/**
 * sqrt - It takes two arguments
 * It checks the square root of a number
 * @a: input number
 * @b: counter
 * Return: returns square root of a number
 */
int sqrt(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (sqrt(a, b + 1));
}


/**
 * _sqrt_recursion - It takes one argument
 * It returns the natural square root of a number
 * @n: integer to find square root
 * Return: returns square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(n, 1));
}
