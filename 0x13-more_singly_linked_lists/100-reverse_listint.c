#include <stddef.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>


/**
* reverse_listint - a function to reverses a listing_t
*
* @head: thats a pointer to the head of list
*
* Return: return an address of the new head,
* else return NULL if fail
**/
listint_t *reverse_listint(listint_t **head)
{
listint_t *inital, *next;

if (*head == NULL)
	return (NULL);

inital = *head;
next = (*head)->next;
inital->next = NULL;

while (next != NULL)
{
	*head = next;
	next = next->next;
	(*head)->next = inital;
	inital = *head;
}
return (*head);
}
