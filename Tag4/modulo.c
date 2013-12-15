/* Modulo-Beispiel. Konvertiert Sekundenzahl in Stunden, Minuten, Sekunden. */

#include <stdio.h>

#define SEK_PRO_MIN	60
#define SEK_PRO_STD	3600

unsigned sekunden, minuten, stunden, sek_rest, min_rest;

int main(void) {
	/* Sekunden einlesen */
	printf("Geben Sie die Anzahl an Sekunden ein: ");
	scanf("%d", &sekunden);

	/* Berechnung */
	stunden = sekunden / SEK_PRO_STD;
	minuten = sekunden / SEK_PRO_MIN;
	min_rest = minuten % SEK_PRO_MIN;
	sek_rest = sekunden % SEK_PRO_MIN;

	/* Ausgabe */
	printf("%u Sekunden entsprechen ", sekunden);
	printf("%u h, %u min und %u s\n", stunden, min_rest, sek_rest);

	return 0;
}
