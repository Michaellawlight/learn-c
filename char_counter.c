#include <stdio.h>

int main () {
	long nl = 0;
	long nt = 0;
	long nb = 0;
	int c;

	while((c = getchar()) != EOF) {
	 if (c == '\n') {
		 ++nl;
	 }

	 else if (c == '\t') {
		 ++nt;
	 }

	 else if (c == ' ') {
		 ++nb;
	 }
	 else if(c =='x') {
		 break;
	 }
	}

	 printf("New lines : %ld\n", nl);
	 printf("Tabs : %ld\n", nt);
	 printf("Blanks : %ld\n", nb);

}
