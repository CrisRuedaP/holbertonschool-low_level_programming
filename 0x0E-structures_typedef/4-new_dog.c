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

dog_t *mora;

mora = malloc(sizeof(dog_t));

if (mora == NULL)
return (NULL);

for (n = 0; name[n] != '\0'; n++)
{
}
mora->name = malloc((n + 1) * sizeof(char));
if (mora->name == NULL)
{
free(mora);
return (NULL);
}

for (o = 0; owner[o] != '\0'; o++)
{
}
mora->owner = malloc((o + 1) * sizeof(char));
if (mora->owner == NULL)
{
free(mora->name);
free(mora);
return (NULL);
}
for (i = 0; i < n; i++)
mora->name[i] = name[i];

for (j = 0; j < o + 1; j++)
mora->owner[j] = owner[j];

mora->age = age;

return (mora);
}

