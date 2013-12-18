#include <stdio.h>

struct daten {
	float betrag;
	char vname[30];
	char nname[30];
} rec;

int main(void) {

	printf("Geben Sie Vor- und Nachname ein. getrennt durch Space: ");
	scanf("%s %s", rec.vname, rec.nname);

	printf("Geben Sie die Hoehe der Spende ein: ");
	scanf("%f", &rec.betrag);

	printf("Der Spender %s %s gab %.2f Geld.", rec.vname, rec.nname, rec.betrag);

	return 0;

}
