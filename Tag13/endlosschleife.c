#include <stdio.h>

#define DELAY 1500000

int menue(void);
void warten(void);

int main(void) {

	int option;

	while (1) {

		option = menue();

		if (option == 1) {
			puts("\nAufgabe A wird ausgefuehrt.");
			warten();
		}
		else if (option == 2) {
			puts("\nAufgabe B wird ausgefuehrt.");
			warten();
		}
		else if (option == 3) {
			puts("\nAufgabe C wird ausgefuehrt.");
			warten();
		}
		else if (option == 4) {
			puts("\nAufgabe D wird ausgefuehrt.");
			warten();
		}
		else if (option == 5) {
			puts("\nSie verlassen das Programm.");
			warten();
			break;
		}
		else {
			puts("Ungueltige Option.");
			warten();
		}

	}

	return 0;

}

int menue(void) {

	int antwort;

	puts("Geben Sie 1 fuer Aufgabe A ein.");
	puts("Geben Sie 2 fuer Aufgabe B ein.");
	puts("Geben Sie 3 fuer Aufgabe C ein.");
	puts("Geben Sie 4 fuer Aufgabe D ein.");
	puts("Geben Sie 5 zum Verlassen ein.");

	scanf("%d", &antwort);
	return antwort;

}

void warten(void) {

	long x;
	for (x=0; x<DELAY; x++)
		;

}
