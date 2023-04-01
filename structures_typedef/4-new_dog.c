#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: return struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; d->name[i] != '\0'; i++)
	{
		d->name[i] = name[i];
	}
	d->name[i] = '\0';
	for (i = 0; d->owner[i] != '\0'; i++)
	{
		d->owner[i] = owner[i];
	}
	d->owner = '\0';
	return (d);
}
