#include <stdio.h>
#include <time.h>

int main(void) {

	time_t beginn,
	       ende,
	       jetzt;
	struct tm *zgr;
	char *c,
	     puffer1[80];
	double dauer;

	beginn = time(0);

	time(&jetzt);

	zgr = localtime(&jetzt);

	c = asctime(zgr);
	puts(c);
	getc(stdin);

	strftime(puffer1, 80, "Dies ist die %U. Woche des Jahres %Y", zgr);
	puts(puffer1);
	getc(stdin);

	strftime(puffer1, 80, "Heute ist %A, %m/%d/%Y", zgr);
	puts(puffer1);
	getc(stdin);

	strftime(puffer1, 80, "Es ist %M Minuten nach %I.", zgr);
	puts(puffer1);
	getc(stdin);

	ende = time(0);
	dauer = difftime(ende, beginn);
	printf("Ausfuehrungszeit mit time = %f Sekunden\n", dauer);

	printf("Ausfuehrungszeit mit clock = %ld Hunderstel Sekunden\n", clock());

	return(0);

}
