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
	int i, j;

	d = malloc(sizeof(dog_t *));
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
	for (i = 0; d->name[i] != '\0'; i++)
	{
		d->name[i] = name[i];
	}
	d->name[i] = '\0';
	d->age = age;
	for (j = 0; d->owner[j] != '\0'; j++)
	{
		d->owner[j] = owner[j];
	}
	d->owner[j] = '\0';
	return (d);
}
