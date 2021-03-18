#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds the length of a string
 * @str: the input to find the length
 * Return: length of a string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node - adds a node a the beginning of a linked list
 * @head: pointer to a pointer to a linked list
 * @str: string to add to the new node
 * Return: returns pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = _strlen(newNode->str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
