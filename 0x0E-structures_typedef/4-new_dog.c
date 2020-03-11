#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - struct dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i, j, n, o;

dog_t *perrito;

perrito = malloc(sizeof(dog_t));

if (perrito == NULL)
return (NULL);

for (n = 0; name[n] != '\0'; n++)
{
}
perrito->name = malloc((n + 1) * sizeof(char));
if (perrito->name == NULL)
{
free(perrito);
return (NULL);
}

for (o = 0; owner[o] != '\0'; o++)
{
}
perrito->owner = malloc((o + 1) * sizeof(char));
if (perrito->owner == NULL)
{
free(perrito->name);
free(perrito);
return (NULL);
}
for (i = 0; i < n; i++)
perrito->name[i] = name[i];

for (j = 0; j < o + 1; j++)
perrito->owner[j] = owner[j];

perrito->age = age;

return (perrito);
}

