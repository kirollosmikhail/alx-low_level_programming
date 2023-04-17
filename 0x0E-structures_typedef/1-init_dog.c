#include "dog.h"

/**
  * init_dog - initialize a dog.
  *
  * @d: Pointer to a structure dog;
  * @name: dog name
  * @age: dog's age
  * @owner: the name of owner.
  *
  * Description: Initialize dog of type structure dog with name, age
  * and owner in pointer.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->owner = owner;
d->age = age;
d->name = name;
}
}
