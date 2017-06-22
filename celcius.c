#include <stdio.h>

// Print Fahrenheit-Celcius Table

#define LOWER 0 // lower limit
#define UPPER 300  // upper limit
#define STEP 20 // step per iteration

int main() {

	for (float i = UPPER; i >= LOWER; i -= STEP) {
		float celcius = (5.0 / 9.0) * (i - 32.0);
		printf("%3.0f %6.1f\n", i, celcius);
	}
}
