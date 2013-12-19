#include <stdio.h>
#include <stdlib.h>

int main() {

	char eingabe[40];

	while (1) {

		puts("Systembefehl eingeben, Enter fuer Ende): ");
		fgets(eingabe, 40, stdin);

		if (eingabe[0] == '\n')
			exit(0);

		system(eingabe);

	}

	return 0;

}
