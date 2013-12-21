#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE *fp;
	char ch,
	     dateiname[40],
	     modus[5];

	while (1) {

		printf("Geben Sie einen Dateinamen ein: ");
		gets(dateiname);
		printf("Geben Sie einen Modus ein (max. 3 Zeichen): ");
		gets(modus);

		if ( (fp = fopen(dateiname, modus)) != NULL ) {

			printf("%s im Modus %s erfolgreich geoeffnet.", dateiname, modus);
			fclose(fp);

			puts("\nx fuer Ende, weiter mit Eingabetaste");
			if ( (ch = getc(stdin)) == 'x')
				break;
			else
				continue;

		}
		else {

			fprintf(stderr, "Fehler beim Oeffnen von %s im Modus %s", dateiname, modus);
			
			puts("\nx fuer Ende, neuer Versuch mit Eingabetaste.");
			if ( (ch = getc(stdin)) == 'x')
				break;
			else
				continue;

		}

	}

	return 0;

}
