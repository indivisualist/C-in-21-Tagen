#include <stdio.h>

int main(void) {

	int n;

start:
	puts("Geben Sie eine Zahl zwischen 0 und 10 ein: ");
	scanf("%d", &n);

	if (n<0 || n>10)
		goto start;
	else if (n == 0)
		goto location0;
	else if (n == 1)
		goto location1;
	else
		goto location2;

location0:
	puts("Ihre Eingabe lautete 0.");
	goto ende;

location1:
	puts("Ihre Eingabe lautete 1.");
	goto ende;

location2:
	puts("Sie haben einen Wert zwischen 2 und 10 eingegeben.");

ende:
	return 0;

}
