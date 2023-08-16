#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - nstance of struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *leroy;

	leroy = (dog_t *) malloc(sizeof(dog_t));
	if (leroy == NULL)
		return (NULL);
	leroy->name = (char *) malloc(strlen(name) + 1);
	leroy->owner = (char *) malloc(strlen(owner) + 1);
	if (leroy->name == NULL || leroy->owner == NULL)
	{
		free(leroy->name);
		free(leroy->owner);
		free(leroy);
		return (NULL);
	}
	strcpy(leroy->name, name);
	strcpy(leroy->owner, owner);
	leroy->age = age;
	return (leroy);
}
