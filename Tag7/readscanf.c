#include <stdio.h>

#define VERLASSEN 4

int menue_option_einlesen(void);

int main(void) {
	int option = 0;
	int int_var = 0;
	float float_var = 0.0;
	unsigned unsigned_var = 0;

	while (option != VERLASSEN) {
		option = menue_option_einlesen();

		if (option == 1) {
			puts("Geben Sie eine vorzeichenbehaftete Dezimalzahl ein, z.B. -123");
			scanf("%d", &int_var);
		}
		if (option == 2) {
			puts("Geben Sie eine Gleitkommazahl ein, z.B. 1.23");
			scanf("%f", &float_var);
		}
		if (option == 3) {
			puts("Geben Sie eine vorzeichenlose Dezimalzahl ein, z.B. 123");
			scanf("%u", &unsigned_var);
		}
	}

	printf("Ihre Werte lauten: int: %d float: %f unsigned: %u", int_var, float_var, unsigned_var);
	
	return 0;
}

int menue_option_einlesen(void) {
	int auswahl = 0;

	do {
		puts("1 - vorzeichenbehaftete Dezimalzahl einlesen");
		puts("2 - Gleitkommazahl einlesen");
		puts("3 - vorzeichenlose Dezimalzahl einlesen");
		puts("4 - verlassen");
		
		scanf("%d", &auswahl);
	} while (auswahl<1 || auswahl>4);

	return auswahl;
}
