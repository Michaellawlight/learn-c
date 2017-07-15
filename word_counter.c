/* 
counts "words" otherwise known as contiguous characters, newlines, and characters
*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{

  int c;
  double nl = 0;
  double nc = 0;
  double nw = 0;
  
  int state = OUT;

  while ((c = getchar()) != EOF) {
    nc++;
    if (c == '\n')
      nl++;
    if ((c == ' ' || c == '\n' || c == '\t')) {
      state = OUT;
    }
    else if (state == OUT) {
      state = IN;
      nw++;
    }

  }


  printf("Number of words: %.0f\n", nw);
  printf("Number of newlines: %.0f\n", nl);
  printf("Number of characters: %.0f\n", nc);
  
  
  return 0;
}

