#include <stdio.h>
#include "dog.h"
/**
 * print_dog - struct dog.
 * @d: pointer to structure
 * Return: Print element or if is NULL print nill.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("Name: (nil)\n");

if (d->owner == NULL)
printf("Owner: (nil)\n");

printf("Name: %s\n", d->name);
printf("Age: %6f\n", d->age);
printf("Owner: %s\n", d->owner);
}
