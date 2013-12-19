#include <stdio.h>
#include <stdlib.h>

int main() {

	int antwort;

	while (1) {

		puts("Geben Sie einen Wert zwischen 1 und 10 ein, 0 fuer Ende.");
		scanf("%d", &antwort);

		switch (antwort) {

			case 0:
				exit(0);
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				{
					puts("Ihre Eingabe lautete 5 oder kleiner.");
					break;
				}
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
				{
					puts("Ihre Eingabe lautete 6 oder groesser.");
					break;
				}
			default:
				puts("Zwischen 1 und 10 bitte ...");

		}

	}

	return 0;

}
			
