#include <stdio.h>

int main()
{

  for (float current = 300; current >= 0; current -= 20) {
    printf("%3.0f\t%6.1f\n", current, (5.0 / 9.0) * (current - 32.0));
  }
  
  return 0;
}
