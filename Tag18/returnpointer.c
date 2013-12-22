#include <stdio.h>

int groesser1(int x, int y);
int *groesser2(int *x, int *y);

int main() {

	int a,
	    b,
	    max_wert1,
	    *max_wert2;

	printf("Geben Sie zwei Integer-Werte ein: ");
	scanf("%d %d", &a, &b);

	max_wert1 = groesser1(a, b);
	printf("\nDer groessere Wert lautet: %d", max_wert1);
	max_wert2 = groesser2(&a, &b);
	printf("\nDer groessere Wert lautet: %d", *max_wert2);

	return 0;

}

int groesser1(int x, int y) {
	if (y > x)
		return y;
	return x;
}

int *groesser2(int *x, int *y) {
	if (*y > *x)
		return y;
	return x;
}
