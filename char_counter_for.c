/* 
   counts input characters using a for loop instead of a while
 */

#include <stdio.h>

int main () {

  double nc;

  for (nc = 0; getchar() != EOF; nc++)
    ;

  printf("Number of characters: %.0f\n", nc);

  

  return 0;
}
