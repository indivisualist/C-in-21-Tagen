#include <stdio.h>

void funk1(int x);
void eins(void);
void zwei(void);
void andere(void);

int main() {

	int a;

	for (;;) {

		puts("Geben Sie einen Wert von 1 bis 10 ein, 0 zum Beenden: ");
		scanf("%d", &a);

		if (a == 0)
			break;

		funk1(a);

	}

	return(0);

}

void funk1(int x) {

	/* function pointer */
	void (*zgr)(void);

	if (x == 1)
		zgr = eins;
	else if (x == 2)
		zgr = zwei;
	else
		zgr = andere;

	zgr();

}

void eins(void) {
	puts("Sie haben 1 eingegeben.");
}

void zwei(void) {
	puts("Sie haben 2 eingegeben.");
}

void andere(void) {
	puts("Sie haben einen anderen Wert als 1 oder 2 eingegeben.");
}
