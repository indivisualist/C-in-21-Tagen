#include <stdio.h>

#define AUSGABE(x) printf(#x " gleich %d.\n", x)

int main(void) {

	int wert = 1234;
	AUSGABE(wert);

	return(0);

}
