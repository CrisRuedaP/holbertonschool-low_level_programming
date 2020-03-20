#include "lists.h"
/**
 * free_list - function that frees a list.
 * @head: beginning of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
while (head == NULL)
{
free(head->str);
free(head);
}
}
