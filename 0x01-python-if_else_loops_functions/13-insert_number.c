#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - Function inserts number into sorted singly linked list
 *
 * @head: Points to pointer of first node of listint_t list
 * @number: Integer in new node
 *
 * Return: Address of new node,
 *		or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node1 = malloc(sizeof(listint_t));
	listint_t *current = *head;
	listint_t *prev = NULL;

	if (node1 == NULL)
		return (NULL);

	node1->n = number;
	node1->next = NULL;

	if (*head == NULL)
	{
		*head = node1;
		return (node1);
	}

	while (current != NULL && current->n < number)
	{
		prev = current;
		current = current->next;
	}

	if (prev == NULL)
	{
		node1->next = *head;
		*head = node1;
	}

	else
	{
		prev->next = node1;
		node1->next = current;
	}

	return (node1);
}
