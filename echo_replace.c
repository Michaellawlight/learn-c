/* 
Replaces tab with \t, \ with \\ 
Note: backspaces cannot be detected
*/

#include <stdio.h>

int main()
{
  
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf("\\t");
    else if (c == '\\')
      printf("\\\\");
    else 
      putchar(c);
  }

  printf("\n");
  
  return 0;
}

