#include <stdio.h>

int array[5];

int main(void) {
	int ctr = 0,
	    nbr = 0;

	printf("Geben Sie 5 Zahlen zwischen 1 und 10 ein.\n");

	while (ctr<5) {
		nbr = 0;
		while (nbr<1 || nbr>10) {
			printf("Geben Sie Zahl %d von 5 ein: ", ctr+1);
			scanf("%d", &nbr);
		}
		array[ctr] = nbr;
		ctr++;
	}

	for (ctr=0; ctr<5; ctr++)
		printf("Der Wert von %d lautet %d\n", ctr+1, array[ctr]);

	return 0;
}
