#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_list(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *current = *head;
    listint_t *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    return (*head);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to head of list
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(listint_t **head)
{
    listint_t *slow = *head, *fast = *head, *first_half = *head, *second_half;
    
        if (*head == NULL || (*head)->next == NULL)
        return (1);

// Find the middle of the list
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

// Reverse the second half of the list
    second_half = reverse_list(&slow);

// Compare the first half and the second half
    while (second_half != NULL)
    {
        if (first_half->n != second_half->n)
            return (0);
        first_half = first_half->next;
        second_half = second_half->next;
    }
    return (1);

}