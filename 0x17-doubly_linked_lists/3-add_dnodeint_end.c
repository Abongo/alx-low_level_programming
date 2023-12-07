#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
	newNode->prev = NULL;
	*head = newNode;
	return (newNode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
	temp = temp->next;
	}

	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
