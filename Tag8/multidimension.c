#include <stdio.h>
#include <stdlib.h>

int zufall_array[10][10][10];
int a, b, c;

int main(void) {
	/* Array fuellen */
	for (a=0; a<10; a++) {
		for (b=0; b<10; b++) {
			for (c=0; c<10; c++) {
				zufall_array[a][b][c] = rand();
			}
		}
	}

	/* Array anzeigen */
	for (a=0; a<10; a++) {
		for (b=0; b<10; b++) {
			for (c=0; c<10; c++) {
				printf("\nzufall_array[%d][%d][%d] = ", a, b, c);
				printf("%d", zufall_array[a][b][c]);
			}
			printf("\nWeiter mit Eingabetaste. Verlassen mit Strg-C.");
			getchar();
		}
	}

	return 0;
}
