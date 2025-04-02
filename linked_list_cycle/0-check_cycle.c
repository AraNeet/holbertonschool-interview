#include "lists.h"

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
