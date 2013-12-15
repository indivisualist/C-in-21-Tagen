#include <stdio.h>

#define GRAMM_PRO_PFUND 454
const int ZIEL_JAHR = 2050;

long gewicht_in_gramm, gewicht_in_pfund;
int jahr_der_geburt, alter_in_2050;

int main() {
	/* Daten einlesen */
	printf("Bitte Ihr Gewicht in Pfund eingeben: ");
	scanf("%d", &gewicht_in_pfund);
	printf("Bitte Ihr Geburtsjahr eingeben: ");
	scanf("%d", &jahr_der_geburt);

	/* Berechnung */
	gewicht_in_gramm = gewicht_in_pfund * GRAMM_PRO_PFUND;
	alter_in_2050 = ZIEL_JAHR - jahr_der_geburt;

	/* Ausgabe */
	printf("\nIhr Gewicht in Gramm = %ld", gewicht_in_gramm);
	printf("\nIm Jahr 2050 sind Sie %d Jahre alt.\n", alter_in_2050);

	return 0;
}
