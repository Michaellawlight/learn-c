#include <stdio.h>

/* print Fahrenheit-Celcius table
   for fahr = 0, 20, ..., 300 */

int main() {
  float fahr, celcius;
  float lower_fahr, upper_fahr, step_fahr;

  /* float lower_celcius, upper_celcius, step_celcius; */

  lower_fahr = 0; /* lower limit of temperature scale */
  upper_fahr = 300; // upper limit
  step_fahr = 20; // step size

  fahr = lower_fahr;
  /* lower_celcius = (5.0 /9) * (lower_fahr - 32); */

  /* step_celcius = (5.0 / 9) * (step_fahr - 32); */
  /* printf("step: %f, lower: %f", step_celcius, lower_celcius); */

  /* if (step_celcius < 0) */
    /* step_celcius = step_celcius * -1; */

  printf("Celcius / Fahrenheit Table: %.0fF to %.0fF\n", lower_fahr, upper_fahr);

  // Fahrenheit to celcius
  for(float fahr = 300; fahr >= 0; fahr -= 20) {
    printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
  }
  
  /* while (fahr <= upper_fahr) { */
  /*   celcius = 5.0 * (fahr - 32.0) / 9.0; */
  /*   printf("%3.0f\t\%6.1f\n", fahr, celcius); */
  /*   fahr = fahr + step_fahr; */
  /* } */

  /* /\* upper_celcius = celcius; *\/ */
  /* celcius = lower_celcius; */

  /* printf("Fahrenheit / Celcius Table: %.0fF to %.0fF\n", lower_celcius, upper_celcius); */
  /* // Celcius to fahrenheit */
  /* while (celcius <= upper_celcius) { */
  /*   fahr = celcius * (9.0 / 5.0) + 32; */
  /*   printf("%6.1f\t\%3.0f\n", celcius, fahr); */
  /*   celcius = celcius + step_celcius; */
  /* } */
    
}
