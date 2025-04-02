#include "lists.h"

/**
 * check_cycle - Check of the linked list has a loop
 *
 * @list: The list give to check.
 *
 * Return: if looped 1 if not 0
 */
int check_cycle(listint_t *list) {
  listint_t *Turtle = list;
  listint_t *Hare = list;

  while (Hare && Hare->next) {
    Turtle = Turtle->next;
    Hare = Hare->next->next;

    if (Turtle == Hare)
      return 1;
  }
  return 0;
}
