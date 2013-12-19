#include <stdio.h>

char *m1 = "Binaer";
char *m2 = "Dezimal";
char *m3 = "Oktal";
char *m4 = "Hexadezimal";

main() {

	float d1 = 100000.123;
	int n,
	    f;

	puts("Eine Zahl mit unterschiedlichen Feldlaengen ausgeben.\n");

	printf("%5f\n", d1);
	printf("%10f\n", d1);
	printf("%15f\n", d1);
	printf("%20f\n", d1);
	printf("%25f\n", d1);

	puts("\nWeiter mit Enter ...");
	fflush(stdin);
	getchar();

	puts("\nFeldlaengenspezifizierer\n");

	for (n=5; n<=25; n+=5)
		printf("%*f\n", n, d1);

	puts("\nWeiter mit Enter ...");
	fflush(stdin);
	getchar();

	puts("\nFuehrende Nullen\n");

	printf("%05f\n", d1);
	printf("%010f\n", d1);
	printf("%015f\n", d1);
	printf("%020f\n", d1);
	printf("%025f\n", d1);

	puts("\nWeiter mit Enter ...");
	fflush(stdin);
	getchar();

	puts("\nOktal, Dezimal, Hexadezimal\n");

	printf("%-15s%-15s%-15s", m2, m3, m4);

	for (n=1; n<20; n++)
		printf("\n%-15d%-15o%-#15X", n, n, n);

	puts("\nWeiter mit Enter ...");
	fflush(stdin);
	getchar();

	puts("\nKonvertierungsbefehl");

	printf("%s%s%s%s%n", m1, m2, m3, m4, &n);

	printf("\nDer letzte printf-Aufruf gab %d Zeichen aus.", n);

	return 0;

}
