#include <stdio.h>

/*
  
Copies the input to the output just like echo

 */

int main() {

  int c;

  while((c = getchar()) != EOF)
    putchar(c);

  return 0;
}
