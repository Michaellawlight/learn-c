/* 
Counts newlines, characters, blanks and tabs
*/

#include <stdio.h>

int main()
{

  int c;
  double nl, nc, nb, nt;
  nl = 0;
  nc = 0;
  nb = 0;
  nt = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      nl++;
    else if (c == '\t')
      nt++;
    else if (c == ' ')
      nb++;

    nc++;
  }

  printf("Number of new lines: %.0f\n", nl);
  printf("Number of tabs: %.0f\n", nt);
  printf("Number of blanks: %.0f\n", nb);
  printf("Number of characters: %.0f\n", nc);

  return 0;
}
