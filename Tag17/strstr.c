#include <stdio.h>
#include <string.h>

int main() {

	char *loc,
	     puffer1[80],
	     puffer2[80];

	printf("Geben Sie den String ein, der durchsucht werden soll: ");
	gets(puffer1);
	printf("Geben Sie den zu suchenden String ein: ");
	gets(puffer2);

	loc = strstr(puffer1, puffer2);

	if (loc == NULL)
		printf("Keine Uebereinstimmung.");
	else
		printf("%s wurde an Position %d gefunden.", puffer2, loc-puffer1);

	return(0);

}
