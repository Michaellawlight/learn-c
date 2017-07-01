#include <stdio.h>

// Prints out a fahrenheight to celcius table

int main()
{
  
  int lower = 0;
  int upper = 300;
  int step = 20;


  while (lower <= upper) {
    int celcius = (5.0 / 9.0) * (lower - 32);

    printf("%3d\t%6d\n", lower, celcius);
    
    lower += step;
  }

  return 0;
}
