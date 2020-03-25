#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position..
 * @head: beginning of the list
 * @idx: index of the list where the new node should be added.
 * @n: the place of the new node
 * Return: the address of the new node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *tmp;
unsigned int position = 0;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

tmp = *head;
while (position < idx - 1)
{
tmp = tmp->next;
position++;
if (tmp == NULL)
{
free(new_node);
return (NULL);
}
}
new_node->next = tmp->next;
tmp->next = new_node;
return (new_node);
}
