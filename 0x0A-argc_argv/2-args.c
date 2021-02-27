#include <stdio.h>
/**
 * main - It takes two arguments
 * It prints all arguments it receives
 * @argc: numbers of arguments passed to a function
 * @argv: pointer to array of strings
 * Return: returns zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
