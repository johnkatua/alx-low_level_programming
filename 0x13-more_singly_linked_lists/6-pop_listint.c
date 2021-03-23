#include "lists.h"
/**
 *pop_listint- deletes the head node listint_t
 *@head:A pointer to a pointer that points to the head of a linked list.
 *Return:the head s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	temp = (*head);
	(*head) = (*head)->next;
	free(temp);
	return (data);
}
