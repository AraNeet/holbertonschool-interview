#include "palindrome.h"
#include <stdio.h>

/**
 * reverse - Reverses a number
 * 
 * @n: Number to reverse
 * @rev: Pointer to number where will be stored
 * 
 * Return: void
 */
void reverse(unsigned long n, unsigned long *rev)
{
    if (n > 0)
    {
        *rev = *rev * 10 + n % 10;
        reverse(n / 10, rev);
    }
}

/**
 * is_palindrome
 * @n: Number to check
 * 
 * Return: 1 if n is a palindrome, otherwise
*/
int is_palindrome(unsigned long n)
{
    unsigned long rev = 0;

    reverse(n, &rev);

    if (rev == n)
        return (1);
    
    return (0);
}