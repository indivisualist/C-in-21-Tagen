#include <stdio.h>

void tastatur_loeschen(void);

main () {

	int alter;
	char name[20];

	puts("Geben Sie Ihr Alter ein.");
	scanf("%d", &alter);

	tastatur_loeschen();

	puts("Geben Sie Ihren Vornamen an.");
	scanf("%s", name);

	printf("Ihr Alter ist %d.\n", alter);
	printf("Ihr Name lautet %s.", name);

	return 0;

}

void tastatur_loeschen(void) {

	char muell[80];
	gets(muell);

}
