#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void) {

	FILE *fp;
	char dateiname[80];

	printf("Geben Sie einen Dateinamen ein: ");
	gets(dateiname);

	if ((fp = fopen(dateiname, "r")) == NULL) {
		perror("Daneben getippt");
		printf("errno = %d", errno);
		exit(1);
	}
	else {
		puts("Datei zum Lesen geoeffnet");
		fclose(fp);
	}

	return(0);

}
