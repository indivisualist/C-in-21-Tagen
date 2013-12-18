#include <stdio.h>

struct daten {
	float betrag;
	char vname[30];
	char nname[30];
} rec;

void ausgabe(struct daten x);

int main(void) {

	printf("Vor- und Nachname, getrennt mit Space: ");
	scanf("%s %s", rec.vname, rec.nname);

	printf("Geben Sie die Spende ein: ");
	scanf("%f", &rec.betrag);

	ausgabe(rec);

	return 0;

}

void ausgabe(struct daten x) {
	printf("Spender %s %s gab %.2f Geld.", x.vname, x.nname, x.betrag);
}
