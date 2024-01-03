#include "lists.h"

/**
 * check_cycle - Function checks if a singly linked list has cycle
 * @list: The pointer to the head of the list
 * Return: 0 if there is no cycle,
 *		1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow_ptr = list;
	listint_t *fast_ptr = list;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
			return (1);
	}

	return (0);
}
