#include <stdio.h>

// Prints out a fahrenheight to celcius table
// Uses floats

int main()
{
  
  float lower = 0;
  float upper = 300;
  float step = 20;

  printf("Fahr to Celcius: %.0fF to %.0fF\n", lower, upper);
  printf("----------------------------------\n");

  float current = lower;

  int pass = 0;
  float lower_celcius;

  float celcius;

  while (current <= upper) {
    celcius = (5.0 / 9.0) * (current- 32.0);

    if (!pass) {
      lower_celcius = celcius;
      pass = 1;
    }
      

    printf("%3.0f\t%6.1f\n", current, celcius);
    
    current += step;
  }

  float step_celcius = (5.0 / 9.0) * (step - 32.0);

  if ( step_celcius < 0 ) {
    step_celcius *= -1;
  }

  float upper_celcius = celcius;

  printf("\n");

  printf("Celcius to Fahr: %.0fC to %.0fC\n", lower_celcius, upper_celcius);
  printf("---------------------------------------\n");

  for (;lower_celcius <= upper_celcius; lower_celcius += step_celcius) {
    printf("%6.1f\t%3.0f\n", lower_celcius, lower_celcius * (9.0 / 5.0) + 32);
  }


  return 0;
}
