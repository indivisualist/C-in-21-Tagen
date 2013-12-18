#include <stdio.h>

int laenge,
    hoehe;
long flaeche;

struct koord {
	int x;
	int y;
};

struct rechteck {
	struct koord obenlinks;
	struct koord untenrechts;
} meinfeld;

int main(void) {

	printf("x-Koordinate oben links: ");
	scanf("%d", &meinfeld.obenlinks.x);

	printf("y-Koordinate oben links: ");
	scanf("%d", &meinfeld.obenlinks.y);

	printf("x-Koordinate unten rechts: ");
	scanf("%d", &meinfeld.untenrechts.x);

	printf("y-Koordinate unten rechts: ");
	scanf("%d", &meinfeld.untenrechts.y);
	
	hoehe = meinfeld.untenrechts.x - meinfeld.obenlinks.x;
	laenge = meinfeld.untenrechts.y - meinfeld.obenlinks.y;

	flaeche = hoehe * laenge;
	printf("Die Flaeche misst %ld Einheiten.", flaeche);

	return 0;

}
