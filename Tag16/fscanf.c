#include <stdlib.h>
#include <stdio.h>

int main(void) {

	float f1,
	      f2,
	      f3,
	      f4,
	      f5;
	FILE *fp;

	if ( (fp = fopen("eingabe.txt", "r")) == NULL ) {
		fprintf(stderr, "Fehler beim Oeffnen der Datei.");
		exit(1);
	}

	fscanf(fp, "%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);
	printf("Die Werte lauten %f %f %f %f %f", f1, f2, f3, f4, f5);

	fclose(fp);
	return(0);

}
