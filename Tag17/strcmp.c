#include <stdio.h>
#include <string.h>

int main() {

	char str1[80],
	     str2[80];
	int x;

	while (1) {

		printf("\nErster String; Ende mit Enter: ");
		gets(str1);

		if (strlen(str1) == 0)
			break;

		printf("Zweiter String: ");
		gets(str2);

		x = strcmp(str1, str2);
		printf("\nstrcmp(%s,%s) liefert %d zurueck", str1, str2, x);

	}

	return(0);

}
