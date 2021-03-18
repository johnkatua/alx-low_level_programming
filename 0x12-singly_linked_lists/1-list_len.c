#include "lists.h"
#include <stdio.h>

/**
 * list_len - checks for a number of elements in a linked list
 * @h: pointer to the start of a linked list
 * Return: returns number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
	{
		temp = temp->next;
	}
	return (i);
}
