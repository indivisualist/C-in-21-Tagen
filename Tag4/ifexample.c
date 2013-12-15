#include <stdio.h>

int x, y;

int main(void) {
	/* zwei Werte einlesen */
	printf("\nGeben Sie einen Integer fuer x ein: ");
	scanf("%d", &x);
	printf("\nGeben Sie einen Integer fuer y ein: ");
	scanf("%d", &y);

	/* Werte testen */
	if (x == y)
		printf("x ist gleich y\n");
	if (x > y)
		printf("x ist groesser als y\n");
	if (x < y)
		printf("x ist kleiner als y\n");

	return 0;
}
