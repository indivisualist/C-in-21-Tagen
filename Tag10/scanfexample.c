#include <stdio.h>

char nname[81],
     vname[81];
int count,
    id_num;

int main(void) {
	puts("Geben Sie Nachname, Vorname und Nummer ein. Trennen mit Space, Eingabe beendet.");

	count = scanf("%s%s%d", nname, vname, &id_num);

	printf("%d Elemente wurden eingegeben: %s, %s, %d", count, vname, nname, id_num);

	return 0;
}
