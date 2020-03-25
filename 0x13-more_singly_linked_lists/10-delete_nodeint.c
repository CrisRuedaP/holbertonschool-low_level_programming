#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index.
 * @head: beginning of the list
 * @index: is the index of the node that should be deleted.
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node, *tmp;
unsigned int i = 0;

if (*head == NULL)
return (-1);

tmp = *head;
if (index == 0)
{
*head = (*head)->next;
free(tmp);
}
else
{
for (i = 0; tmp != NULL && i < index - 1; i++)
{
tmp = tmp->next;
if (tmp == NULL || tmp->next == NULL)
return (-1);
}
node = tmp;
node = node->next;
tmp->next = node->next;
free(node);
}
return (1);
}
