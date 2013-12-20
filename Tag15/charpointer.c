#include <stdio.h>

main () {

	char *meldung[6] = { "Vor", "vier", "Generationen", "begannen", "unsere", "Vorvaeter" };
	int count;

	for (count=0; count<6; count++)
		printf("%s ", meldung[count]);
	
	return(0);

}
