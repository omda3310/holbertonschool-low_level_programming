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
	int k;

	d = malloc(sizeof(dog_t));
	if (d == NULL || !(name) || !(owner))
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(sizeof(name) + 1);
	d->owner = malloc(sizeof(owner) + 1);
	if (d->owner == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (k = 0; d->name[k] != '\0'; k++)
	{
		d->name[k] = name[k];
	}
	d->name[k] = '\0';
	d->name = name;
	d->age = age;
	for (k = 0; d->owner[k] != '\0'; k++)
	{
		d->owner[k] = owner[k];
	}
	d->owner[k] = '\0';
	d->owner = owner;
	return (d);
}
