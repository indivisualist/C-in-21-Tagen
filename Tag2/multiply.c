/* Berechnet das Produkt zweier Zahlen */
#include <stdio.h>

int a, b, c;

int product(int x, int y);

int main() {
	/* erste Zahl einlesen */
	printf("Geben Sie eine Zahl zwischen 1 und 100 ein: ");
	scanf("%d", &a);

	/* zweite Zahl einlesen */
	printf("Geben Sie eine weitere Zahl zwischen 1 und 100 ein: ");
	scanf("%d", &b);

	/* Produkt berechnen und anzeigen */
	c = product(a, b);
	printf("%d mal %d = %d\n", a, b, c);

	return 0;
}

/* Funktion gibt Produkt der beiden bereitgestellten Werte zurueck */
int product(int x, int y) {
	return (x * y);
}
