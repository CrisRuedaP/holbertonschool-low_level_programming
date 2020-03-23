#include "lists.h"

/**
 * listint_len - print all elements of a list.
 * @h: list of elements
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
