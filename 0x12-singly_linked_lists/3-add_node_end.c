#include "lists.h"
#include<string.h>
/**
 * _strlen - return the length of a string
 * @s: string
 * Return: result.
 */
int _strlen(const char *s)
{
int len = 0;

while (s[len] != '\0')

len++;

return (len);

}
/**
 * add_node_end - add a new node at the end of a list.
 * @head: beginning of the list
 * @str: needs to be duplicated
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *tmp;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
new_node->len = _strlen(str);
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
else
{
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = new_node;
}
return (new_node);
}
