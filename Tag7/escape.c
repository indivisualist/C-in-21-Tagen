#include <stdio.h>

#define VERLASSEN 3

int menue_option_einlesen(void);
void bericht_anzeigen(void);

int main(void) {
	int option = 0;

	while (option != VERLASSEN) {
		option = menue_option_einlesen();

		if (option == 1) {
			printf("Akustisches Signal des Computers\a\a\a");
		}
		else {
			if (option == 2)
				bericht_anzeigen();
		}
	}
	
	printf("Sie haben die Option Verlassen gewaehlt.");
	return 0;
}

int menue_option_einlesen(void) {
	int auswahl = 0;

	do {
		printf("\n1 - Akustisches Signal");
		printf("\n2 - Bericht anzeigen");
		printf("\n3 - Verlassen");
		printf("\nIhre Wahl: ");

		scanf("%d", &auswahl);
	} while (auswahl<1 || auswahl>3);
	return auswahl;
}

void bericht_anzeigen(void) {
	printf("blabla zu faul zum Abtippen ...");
}
