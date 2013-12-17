#include <stdio.h>

#define MAX_NOTE 100
#define STUDENTEN 10

int noten[STUDENTEN];
int idx;
int gesamt = 0;

int main(void) {
	for (idx=0; idx<STUDENTEN; idx++) {
		printf("Geben Sie die Note von Student %d ein: ", idx+1);
		scanf("%d", &noten[idx]);

		while (noten[idx] > MAX_NOTE) {
			printf("\nDie beste moegliche Note ist %d", MAX_NOTE);
			printf("\nGeben Sie eine korrekte Note ein: ");
			scanf("%d", &noten[idx]);
		}

		gesamt += noten[idx];
	}

	printf("\nDer Durchschnittswert betraegt %d", (gesamt / STUDENTEN));

	return(0);
}
