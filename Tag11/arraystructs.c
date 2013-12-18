#include <stdio.h>

struct eintrag {
	char vname[20];
	char nname[20];
	char telefon[10];
};
struct eintrag liste[4];
int i;

int main(void) {

	for (i=0; i<4; i++) {
		printf("Vorname: ");
		scanf("%s", liste[i].vname);
		printf("Nachname: ");
		scanf("%s", liste[i].nname);
		printf("Telefonnummer, Format 123-4567: ");
		scanf("%s", liste[i].telefon);
	}

	printf("\n");
	
	for (i=0; i<4; i++) {
		printf("Name: %s %s", liste[i].vname, liste[i].nname);
		printf("\t\tTelefon: %s\n", liste[i].telefon);
	}

	return 0;

}
