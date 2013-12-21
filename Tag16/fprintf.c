#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE *fp;
	float daten[5];
	int count;
	char dateiname[20];

	puts("Geben Sie 5 Gleitkommazahlen ein.");
	for (count=0; count<5; count++)
		scanf("%f", &daten[count]);
	/*fflush(stdin);*/
	char muell[80];
	gets(muell);

	puts("Geben Sie einen Namen fuer die Datei ein.");
	gets(dateiname);

	if ( (fp = fopen(dateiname, "w")) == NULL ) {
		fprintf(stderr, "Fehler beim Oeffnen der Datei %s", dateiname);
		exit(1);
	}

	for (count=0; count<5; count++) {
		fprintf(fp, "daten[%d] = %f\n", count, daten[count]);
		fprintf(stdout, "daten[%d] = %f\n", count, daten[count]);
	}

	fclose(fp);
	return(0);

}
