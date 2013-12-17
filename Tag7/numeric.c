#include <stdio.h>

int a = 2,
    b = 10,
    c = 50;
float f = 1.05,
      g = 25.5,
      h = -0.1;

int main(void) {
	printf("\nDezimalwerte ohne Tabulatoren: %d %d %d", a, b, c);
	printf("\nDezimalwerte mit Tabulatoren: \t%d \t%d \t%d", a, b, c);

	printf("\nDrei Gleitkommawerte in einer Zeile: \t%f\t%f\t%f", f, g, h);
	printf("\nDrei Gleitkommawerte in drei Zeilen: \n\t%f\n\t%f\n\t%f", f, g, h);

	printf("\nDie Quote betraegt %f%%", f);
	printf("\nDas Ergebnis von %f/%f = %f", g, f, g/f);

	return 0;
}
