#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * print_list - print all elements of a list.
 * @head: beginning of the list
 * @str: needs to be duplicated
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_nodo;
new_nodo = malloc(sizeof(list_t));
if (new_nodo == NULL)
return (NULL);

new_nodo->str = strdup(str);
new_nodo->len = strlen(str);
new_nodo->next = *head;
*head = new_nodo;

return (new_nodo);
}
