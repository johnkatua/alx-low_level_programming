#include "holberton.h"
/**
 * _pow_recursion - It takes 2 arguments
 * It returns value of x raised to the power of y
 * @x: base number
 * @y: exponent
 * Return: returns x raised to  power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
