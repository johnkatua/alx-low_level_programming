#include "holberton.h"
/**
 * swap_int - It has 2 variables
 * It swaps two values
 *@a: first value
 *@b: second value
 *Return: returns void
 */
void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}
