#include <stdio.h>

char input[81],
     *ptr;

int main() {
	puts("Text zeilenweise eingeben. Leere Zeile beendet.");

	while (*(ptr = gets(input)) != NULL)
		printf("Ihre Eingabe: %s\n", input);

	return 0;
}
