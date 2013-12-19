#include <stdio.h>

#define MAX 80

main () {

	char ch,
	     puffer[MAX+1];
	int x = 0;

	while ((ch == getchar()) != '\n' && x < MAX)
		puffer[x++] = ch;

	puffer[x] = '\0';

	printf("%s", puffer);

	return 0;

}
