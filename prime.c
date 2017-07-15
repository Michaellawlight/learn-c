#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>
#include <tgmath.h>

#include <time.h>

void find_primes(uint64_t lower, uint64_t upper);

int main(int argc, char* argv[argc+1]) {

  if (argc < 3) {

    printf("Incorrect number of arguments\n");
    printf("Usage: ./prime lower upper\nwhere lower and upper are positive integers\n");

    return EXIT_FAILURE;
  }

  // TODO: error checking
  double lower = strtod(argv[1], 0);
  double upper = strtod(argv[2], 0);

  printf("Primes initialized:\n");
  printf("lower = %g, upper=%g\n", lower, upper);

  clock_t start = clock() ;
  find_primes(lower, upper);
  clock_t end = clock() ;
  double elapsed_time = (end-start)/(double)CLOCKS_PER_SEC ;

  printf("Time taken: %g\n", elapsed_time);


  return EXIT_SUCCESS;
}

void find_primes(uint64_t lower, uint64_t upper) {
  printf("Primes:\n");
  for (uint64_t i = lower; i < upper; ++i) {
    bool prime = true;
    for (uint64_t j = 2; j < sqrt(i); ++j) {
      if ((i % j) == 0) {
	// printf("%" PRIu64 "%%" "%" PRIu64"=%" PRIu64 "\n", i, j, i % j);
	prime = false;
	break;
      }
    }

    if (prime) {
       printf("%" PRIu64 "\n", i);
    }
  }
}
