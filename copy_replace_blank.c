/*
  Replace multiple spaces with one
 */

#include <stdio.h>


int main()
{
  
  int c;
  int inside = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' && inside)
      continue;
    else if (c == ' ')
      inside = 1;
    else
      inside = 0;

    putchar(c);
  }

  return 0;
}

