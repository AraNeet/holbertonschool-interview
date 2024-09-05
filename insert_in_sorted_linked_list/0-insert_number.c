#include "lists.h"
#include <stdlib.h>

listint_t *insert_node(listint_t **head, int number) 
{
  listint_t *new;
  listint_t *current;
  
  
  current = *head;

  new = malloc(sizeof(listint_t));
  if (new == NULL)
    return (NULL);
  
  new->n = number;

  if (!current || current->n >= number)
    {
        new->next = *head;
        *head = new;
        return new;
    }

    // Traverse the linked list
    while (current != NULL && current->next != NULL)
    {
        // Check if the current position is the correct insertion point
        if (current->next->n > number)
        {
            // Connect the new node to the next node
            new->next = current->next;
            // Connect the current node to the new node
            current->next = new;
            // Return the new node
            return new;
        }
        // Move to the next node
        current = current->next;
    }
    // connect current to new
    current->next = new;
    // Return the new node
    return new;
}