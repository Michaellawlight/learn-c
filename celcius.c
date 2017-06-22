#include <stdio.h>

#define LOWER 0.0
#define UPPER 300.0
#define STEP 20

int main() {

  printf("celcius / fahrenheit table: %.0ff to %.0ff\n", LOWER, UPPER);

  // fahrenheit to celcius
  for(float fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
  }
    
}
