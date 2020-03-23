#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - add a new node at the end of a list.
 * @head: beginning of the list
 * @n: new element
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *tmp;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
else
{
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new_node;
}
return (new_node);
}
