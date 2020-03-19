#include "lists.h"

/**
 * list_len - print all elements of a list.
 * @h: list of elements
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
