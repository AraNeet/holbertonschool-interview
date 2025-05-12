#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
    * insert_node - inserts a number into a sorted singly linked list
    * @head: pointer to pointer of first node of listint_t list
    * @number: integer to be included in new node
    * Return: address of the new element or NULL if it fails
*/
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node, *tmp1 = *head, *tmp2;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = number;
	if (!tmp1 || tmp1->n >= number)
	{
		new_node->next = tmp1, *head = new_node;
		return (new_node);
	}

	tmp2 = tmp1->next;
	while (tmp1 && tmp2 && (tmp2->n < number))
		tmp1 = tmp1->next, tmp2 = tmp1->next;

	tmp1->next = new_node, new_node->next = tmp2;
	return (new_node);
}