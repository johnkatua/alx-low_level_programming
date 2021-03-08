#include "dog.h"

/**
 * init_dog - It takes 4 arguments
 * It initializes ths structure of type dog
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: dog's age
 * @owner: pointer to the owner of the dog
 * Return: returns void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = namex;
		(*d).age = age;
		(*d).owner = owner;
	}
}
