#include "palindrome.h"

int is_palindrome(unsigned long n) {
  unsigned long div;
  unsigned long left, right;

  if (n < 10) {
    return 1;
  }

  div = 1;
  while (n / div >= 10) {
    div *= 10;
  }

  while (n != 0) {
    left = n / div;
    right = n % 10;
    if (left != right) {
      return 0;
    }

    n = (n % div) / 10;
    div = div / 100;
  }
  return 1;
}
