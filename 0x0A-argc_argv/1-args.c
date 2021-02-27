#include <stdio.h>
/**
 * main - It takes 2 arguments
 * It prints number of arguments
 * @argc: number of params passed  to a function
 * @argv: arrays of strings
 * Return: returns zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
