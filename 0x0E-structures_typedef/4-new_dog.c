#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - struct dog.
 * @d: pointer to structure
 * Return: Print element or if is NULL print nill.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *new_dog;

new_dog = malloc(sizeof(struct dog));
if (new_dog == NULL)
return (NULL);
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
