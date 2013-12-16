#include <stdio.h>

int x, y, z;

int groesser_von(int a, int b);

int main(void) {
	puts("Zwei verschiedene Integer-Werte eingeben: ");
	scanf("%d%d", &x, &y);

	z = groesser_von(x,y);

	printf("Der groessere Wert betraegt %d.", z);

	return 0;
}

int groesser_von(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
