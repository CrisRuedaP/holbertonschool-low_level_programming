#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - prints a name.
 * @array: array
 * @size: unsigned long
 * @action: a pointer to the function
 * return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL)
return;

if (size == 0)
return;

if (action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
