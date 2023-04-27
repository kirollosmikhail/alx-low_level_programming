#include "lists.h"

/**
* add_node_end - adds a new node at the end of the
* linked list
*
* @head: it is a pointer to the adress
* @str: that a new string to store add the new node
*
* Return: The adress of the new element
* else it null means fail
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
list_t *momentary = *head;
char *strn = strdup(str);

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
new->next = NULL;
if (*head == NULL)
{
	*head = new;
	return (new);
}
else
{
	while (momentary->next)
		momentary = momentary->next;
	momentary->next = new;
	return (new);
}
}
