#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *d2;

	d2 = (dog_t *)malloc(sizeof(dog_t));
	if (d2 == NULL)
		return (NULL);
	nameLen = ownerLen = 0;
	while (name[nameLen++])
		;
	while (owner[ownerLen++])
		;
	d2->name = malloc(nameLen * sizeof(d2->name));
	if (d2->name == NULL)
	{
		free(d2);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		d2->name[i] = name[i];
	d2->age = age;
	d2->owner = malloc(ownerLen * sizeof(d2->owner));
	if (d2->owner == NULL)
	{
		free(d2->name);
		free(d2);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		d2->owner[i] = owner[i];
	return (d2);
}
