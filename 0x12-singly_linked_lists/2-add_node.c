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
 * add_node - print all elements of a list.
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
new_nodo->len = _strlen(str);
new_nodo->next = *head;
*head = new_nodo;

return (new_nodo);
}
