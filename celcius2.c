#include <stdio.h>

int main() {

  int lower = 0;
  int upper = 300;
  int step = 20;

  int fahr = lower;

  while(fahr <= upper) {
    int celcius = (5.0 / 9.0) * (fahr - 32);
    printf("%d\t%d\n", fahr, celcius);

    fahr += step;
  }

  return 0;
}
