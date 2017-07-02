/*
Counts the number of lines in the input
*/

#include <stdio.h>


int main()
{

  int c;
  int nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      nl++;
  }

  printf("Number of lines:%d\n", nl);

  return 0;
}
