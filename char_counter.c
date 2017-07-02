/* 
Counts characters from output
 */

#include <stdio.h>

int main() {

  int c;
  int character_count = 0;

  while((c = getchar()) != EOF) {
      character_count++;
  }

  printf("Number of characters: %d\n", character_count);

  return 0;
}
