#include <stdio.h>

int main()
{

  int c;

  while((c = getchar()) != EOF) {
    putchar(c);
  }

  // EOF = -1
  printf("EOF: %d", EOF);
  
}
