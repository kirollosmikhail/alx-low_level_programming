#include "lists.h"

/**
* delete_nodeint_at_index - a function to
* deletes node in a certain index of the linkedlist
* @head: the pointer to header
* @index: the Index of the list which the node should be cleaned
*
* Return: return 1 if it success,
* else -1 if it fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head, *clean;
unsigned int itr;
itr = 0;

if (!*head)
	return (-1);
if (index == 0)
{
	*head = (*head)->next;
	free(tmp);
	return (1);
}
for (; tmp; tmp = tmp->next)
	itr++;
if (index > itr)
	return (-1);
tmp = *head;
for (itr = 0; itr < index - 1; itr++)
	tmp = tmp->next;
clean = tmp->next;
tmp->next = tmp->next->next;
clean->next = NULL;
free(clean);
return (1);
}
