#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{

  for (float current = UPPER; current >= LOWER; current -= STEP) {
    printf("%3.0f\t%6.1f\n", current, (5.0 / 9.0) * (current - 32.0));
  }
  
  return 0;
}
