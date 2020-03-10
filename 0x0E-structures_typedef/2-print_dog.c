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
printf("Name: (nil)");

else
printf("Name: %s\n", d->name);

printf("Age: %f\n", d->age);

if (d->owner == NULL)
printf("Owner: (nil)");

else
printf("Owner: %s\n", d->owner);

}
