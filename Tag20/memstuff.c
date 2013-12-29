#include <stdio.h>
#include <string.h>

char meldung1[60] = "Vier Hunde und sieben kleine Katzen ...";
char meldung2[60] = "abcdefghijklmnopqrstuvwxyz";
char temp[60];

int main(void) {

	printf("meldung1[] vor memset:\t%s\n", meldung1);
	memset(meldung1 + 5, '@', 17);
	printf("meldung1[] nach memset:\t%s\n", meldung1);

	strcpy(temp, meldung2);
	printf("Originalmeldung: %s\n", temp);
	memcpy(temp + 4, temp + 6, 10);
	printf("Nach memcpy ohne Ueberlappung:\t%s\n", temp);
	strcpy(temp, meldung2);
	memcpy(temp + 6, temp + 4, 10);
	printf("Nach memcpy mit Ueberlappung:\t%s\n", temp);

	strcpy(temp, meldung2);
	printf("Originalmeldung: %s\n", temp);
	memmove(temp + 4, temp + 6, 10);
	printf("Nach memmove ohne Ueberlappung:\t%s\n", temp);
	strcpy(temp, meldung2);
	memmove(temp + 6, temp + 4, 10);
	printf("Nach memmove mit Ueberlappung:\t%s\n", temp);

	return(0);

}
