#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of list_t
 * @h: pointer  to the start of the list
 * Return: return number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for(i = 0; temp; i++)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
