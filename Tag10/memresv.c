#include <stdio.h>
#include <stdlib.h>

char count,
     *zgr,
     *z;

int main(void) {

	zgr = malloc(35 * sizeof(char));
	if (zgr == NULL) {
		puts("Fehler bei der Speicherzuweisung.");
		return 1;
	}

	z = zgr;
	for (count=65; count<91; count++)
		*z++ = count;
	*z = '\0';

	puts(zgr);

	return 0;
}
