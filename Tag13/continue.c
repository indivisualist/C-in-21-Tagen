#include <stdio.h>

int main(void) {

	char puffer[81];
	int ctr;

	puts("Geben Sie eine Textzeile ein: ");
	fgets(puffer, 81, stdin);

	/* nur kleingeschriebene Vokale ausgeben */
	for (ctr=0; puffer[ctr]!='\0'; ctr++) {

		if (puffer[ctr] == 'a' ||
			puffer[ctr] == 'e' ||
			puffer[ctr] == 'i' ||
			puffer[ctr] == 'o' ||
			puffer[ctr] == 'u')
			continue;

		putchar(puffer[ctr]);

	}

	return 0;

}
