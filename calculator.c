#include <stdio.h>

#define OPERATION_ADDITION 1
#define OPERATION_SUBTRACTION 2


int main() {
  printf("Calculator initialized\n");

  int c;
  int operation = 0;

  int buffer[10];

  for (int i = 0; i < 10; i++) {
    buffer[i] = -1;
  }

  int size = 0;

  while((c = getchar()) != EOF) {
    if (c == '\n') {
      // Process operation
      if (operation == OPERATION_ADDITION) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
	  if (buffer[i] != -1)
	    sum += buffer[i];

	  break;
	}
	printf("Sum: %d\n", sum);
      }

      // Clear
      for (int i = 0; i < 10; i++) {
	buffer[i] = -1;
      }
      size = 0;
      continue;
    }

    switch(c) {
    case '+':
      operation = OPERATION_ADDITION;
      break;
    default:
      if (c != ' ') {
	printf("%c\n", c);
	buffer[size++] = c - 48;
      }
    }

  }
}
