#include <stdio.h>
#include <string.h>

int main() {
	char buffer[256];

	printf("Bitte Name eingeben:\n");
	gets(buffer); // do not use in production!

	printf("\nIhr Name enthaelt inkl. Leerzeichen %d Zeichen.", strlen(buffer));

	return 0;
}
