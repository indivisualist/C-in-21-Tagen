#include <stdio.h>

void als_wert(int a, int b, int c);
void als_ref(int *a, int *b, int *c);

int main() {

	int x = 2,
	    y = 4,
	    z = 6;

	printf("Vor dem Aufruf von als_wert: x=%d, y=%d, z=%d", x, y, z);
	als_wert(x, y, z);
	printf("\nNach dem Aufruf von als_wert: x=%d, y=%d, z=%d", x, y, z);

	als_ref(&x, &y, &z);
	printf("\nNach dem Aufruf von als_ref: x=%d, y=%d, z=%d", x, y, z);

	return(0);

}

void als_wert(int a, int b, int c) {
	a = 0;
	b = 0;
	c = 0;
}

void als_ref(int *a, int *b, int *c) {
	*a = 0;
	*b = 0;
	*c = 0;
}
