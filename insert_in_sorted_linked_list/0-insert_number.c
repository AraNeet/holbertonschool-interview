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
  if (*head == NULL)
    *head = new;
  else
  {
    while(current != NULL && current->next != NULL)
    {
      if (current->next->n > number)
      {
        new->n = number;
        new->next = current->next;
        current->next = new;
        return(new);
      }
      current = current->next;
    }
  }

  return (new);
}