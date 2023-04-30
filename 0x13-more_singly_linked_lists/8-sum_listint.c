#include "lists.h"

/**
* sum_listint - the sum all the data
* amount of a listint_t
* @head: the head of the node in the linked list
*
* Return: return amount of all the data amount
* of given listint_t linked list
*/

int sum_listint(listint_t *head)
{
int amount;
amount = 0;

for ( ; head; head = head->next)
	amount += head->n;
return (amount);
}
