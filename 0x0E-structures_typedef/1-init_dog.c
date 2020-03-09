#include "dog.h"
#include <stdio.h>
/**
 * init_dog - inicialize a variables.
 * @d: struct name
 * @name: dog name
 * @age: dog age
 * @owner: dog owner.
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;

}
