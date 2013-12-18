#include <stdio.h>

unsigned char x;

int main() {
	for (x=180; x<204; x++)
		printf("ASCII-Code %d liefert das Zeichen %c\n", x, x);
	return 0;
}
