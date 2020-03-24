#include "lists.h"
/**
 * pop_listint - Deletes the head node.
 * @head: beginning of the list
 *
 * Return: the head node's data or 0 if is empty
 */
int pop_listint(listint_t **head)
{

listint_t *tmp;
int data;

if (*head == NULL)
return (0);

tmp = *head;
*head = (*head)->next;
data = tmp->n;
free(tmp);

return (data);
}
