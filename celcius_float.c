#include <stdio.h>

// Prints out a fahrenheight to celcius table
// Uses floats

int main()
{
  
  float lower = 0;
  float upper = 300;
  float step = 20;


  while (lower <= upper) {
    float celcius = (5.0 / 9.0) * (lower - 32.0);

    printf("%3.0f\t%6.1f\n", lower, celcius);
    
    lower += step;
  }

  return 0;
}
