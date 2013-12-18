#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char *str;
	if ((str = (char *) malloc(100)) == NULL) {
		printf("Nicht genug Speicher, um den Puffer zu reservieren\n");
		exit(1);
	}

	int *zahlen;
	zahlen = (int *) malloc(50 * sizeof(int));
	/* kein Check */

	float *fzahlen;
	fzahlen = (float *) malloc(10 * sizeof(float));

	printf("Alles okay!");
	return 0;

}
