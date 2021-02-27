#include <stdio.h>
#include <stdlib.h>
/**
 * main - It takes 2 arguments
 * It multiplies 2 numbers
 * @argc: number of arguments passed to a function
 * @argv: pointer to array of strings
 * Return: returns 0 if successful, else return 1
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;
	printf("%d\n", mul);

	return (0);
}
