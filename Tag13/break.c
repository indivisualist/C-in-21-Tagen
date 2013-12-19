#include <stdio.h>

char s[] = "Dies ist ein Test-String. Er enthaelt zwei Saetze.";

int main (void) {

	int count;

	printf("\nOriginal-String: %s", s);

	for (count=0; s[count]!=0; count++) {
		if (s[count] == '.') {
			s[count+1] = '\0';;
			break;
		}
	}

	printf("\nGeaenderter String: %s", s);

	return 0;

}
