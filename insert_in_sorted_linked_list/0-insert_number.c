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

  if (*head == NULL)
  {
    new->next = *head;
    *head = new;
    return new;
  }
  else
  {
    while(current != NULL && current->next != NULL)
    {
      if (current->next->n > new->n)
      {
        new->next = current->next;
        current->next = new;
        return(new);
      }
      else if (current->n > new->n)
      {
        new->next = current->next;
        current->next = new;
        return(new);
      }

      current = current->next;
    }
  }
  current->next = new;

  return (new);
}