#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
  * _strdup - returns a pointer.
  *
  * @str: is a String
  *
  * Return: returns a pointer to a new string
  */

char *_strdup(char *str)
{
char *duplicate;
int itr1, itr2;

if (str == NULL)
	return (NULL);

for (itr1 = 0; str[itr1] != '\0'; itr1++)
{
}

itr1++;
duplicate = malloc(sizeof(char) * itr1);

if (duplicate == NULL)
	return (NULL);

for (itr2 = 0; itr2 < itr1; itr2++)
	duplicate[itr2] = str[itr2];
return (duplicate);
}

/**
  * new_dog - a function that creates a new dog.
  * @name: dog name
  * @age: dog's age
  * @owner: the name of owner.
  *
  * Return: pointer to a copy of dog_t
  * else return NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dogcp;

if (name != NULL && owner != NULL)
{
	dogcp = malloc(sizeof(dog_t));
	if (dogcp == NULL)
		return (NULL);
	dogcp->name = _strdup(name);
	if (dogcp->name == NULL)
	{
		free(dogcp);
		return (NULL);
	}
	dogcp->owner = _strdup(owner);
	if (dogcp->owner == NULL)
	{
		free(dogcp->name);
		free(dogcp);
		return (NULL);
	}
	dogcp->age = age;
}
return (dogcp);
}
