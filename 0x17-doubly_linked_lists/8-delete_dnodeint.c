#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: beginning of a list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *tmp;
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
