#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - It has one parameter
 * It frees the dog
 * @d: pointer to dog to free
 * Return: returns void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
