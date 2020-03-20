#include "lists.h"
/**
 * free_list - function that frees a list.
 * @head: beginning of the list
 *
 * Return: NULL
 */
void free_list(list_t *head)
{

if (head != NULL)
{
free(head->str);
free(head);
}
}
