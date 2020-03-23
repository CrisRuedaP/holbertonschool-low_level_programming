#include "lists.h"
/**
 * free_listint2 - function that frees a list.
 * @head: beginning of the list
 *
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head != NULL)
{
while (*head != NULL)
{
tmp = *head;
*head = tmp->next;
free(tmp);
}
}
}
