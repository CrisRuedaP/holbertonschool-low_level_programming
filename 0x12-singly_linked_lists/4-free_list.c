#include "lists.h"
/**
 * free_list - function that frees a list.
 * @head: beginning of the list
 *
 * Return: NULL
 */
void free_list(list_t *head)
{
list_t *tmp;

while (head != NULL)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
