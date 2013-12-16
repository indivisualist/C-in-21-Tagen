#include <stdio.h>

long kubik(long x);

long eingabe, antwort;

int main(void) {
	printf("Geben Sie eine ganze Zahl ein: ");
	scanf("%ld", &eingabe);
	
	antwort = kubik(eingabe);
	printf("Die Kubikzahl von %ld ist %ld.", eingabe, antwort);

	return 0;
}

/* Kubikzahl einer Variable berechnen */
long kubik(long x) {
	long x_cubed;
	x_cubed = x * x * x;
	return x_cubed;
}
