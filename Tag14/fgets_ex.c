#include <stdio.h>

#define MAXLAEN 10

main() {

	char puffer[MAXLAEN];

	puts("Geben Sie Zeilen ein. Ende mit Eingabetaste.");

	while (1) {

		fgets(puffer, MAXLAEN, stdin);

		if (puffer[0] == '\n')
			break;

		puts(puffer);

	}

	return 0;

}
