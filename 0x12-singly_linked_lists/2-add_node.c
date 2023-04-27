#include "lists.h"

/**
* add_node - adding a new node at
* the beginning of list_t list
*
* @head: it is a pointer to the adress
* @str: that a new string to store add the new node
*
* Return: The adress of the new element
* else it null means fail
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
char *strn;

if (!new)
	return (NULL);
strn = strdup(str);
if (!strn)
{
	free(new);
	return (NULL);
}
new->str = strn;
new->len = strlen(strn);
new->next = *head;
*head = new;
return (new);
}
