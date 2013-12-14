/* list_it.c Zeigt ein Listing mit Zeilennummern an */
#include <stdio.h>
#include <stdlib.h>

void display_usage(void);
int line;

int main(int argc, char *argv[]) {
	char buffer[256];
	FILE *fp;

	if (argc < 2) {
		display_usage();
		return;
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Fehler beim Oeffnen der Datei, %s!", argv[1]);
		return;
	}

	line = 1;

	while (fgets(buffer, 256, fp) != NULL)
		fprintf(stdout, "%4d:\t%s", line++, buffer);
	
	fclose(fp);
	return 0;
}

void display_usage(void) {
	fprintf(stderr, "Programm wie folgt starten: ");
	fprintf(stderr, "\nlist_it Dateiname.ext\n");
}
