#include <stdio.h>

#define INSIDE 1
#define OUTSIDE 0

int main() {

	int c;
	int state = OUTSIDE;

	while ((c = getchar()) != EOF) {
		if (c == ' ' && state == OUTSIDE)
			state = INSIDE;

		else if (state == INSIDE)
			state = OUTSIDE;

		else
			putchar(c);

	}

}
