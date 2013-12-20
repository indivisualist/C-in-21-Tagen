/* read strings, sort and output them */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXZEILEN 25

int zeilen_einlesen(char *zeilen[]);
void sortieren(char *p[], int n);
void strings_ausgeben(char *p[], int n);

char *zeilen[MAXZEILEN];

int main(void) {

	int anzahl_zeilen;

	anzahl_zeilen = zeilen_einlesen(zeilen);

	if (anzahl_zeilen < 0) {
		puts("Fehler bei der Speicherreservierung");
		exit(-1);
	}

	sortieren(zeilen, anzahl_zeilen);
	strings_ausgeben(zeilen, anzahl_zeilen);

	return(0);

}

int zeilen_einlesen(char *zeilen[]) {

	int n = 0;
	char puffer[80];

	puts("Geben Sie einzelne Zeilen ein. Leerzeile zum Beenden.");

	while ((n < MAXZEILEN) && (gets(puffer) != 0) && (puffer[0] != '\0')) {
		if ((zeilen[n] = (char *)malloc(strlen(puffer)+1)) == NULL)
			return -1;
		strcpy(zeilen[n++], puffer);
	}

	return n;

}

void sortieren(char *p[], int n) {

	int a,
	    b;
	char *x;

	for (a=1; a<n; a++) {
		for (b=0; b<n-1; b++) {
			if (strcmp(p[b], p[b+1]) > 0) {
				x = p[b];
				p[b] = p[b+1];
				p[b+1] = x;
			}
		}
	}

}

void strings_ausgeben(char *p[], int n) {

	int count;

	for (count=0; count<n; count++)
		printf("%s\n", p[count]);

}

