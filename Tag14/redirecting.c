#include <stdio.h>

main() {

	char puffer[80];

	gets(puffer);
	printf("Die Eingabe lautete: %s\n", puffer);

	return 0;

}
