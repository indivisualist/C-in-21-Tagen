#include <stdio.h>
#include <stdarg.h>

float durchschnitt(int num, ...);

int main() {

	float x;

	x = durchschnitt(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	printf("Der erste Durchschnittswert betraegt %f.", x);
	x = durchschnitt(5, 101, 200, 987, 654, 321);
	printf("\nDer zweite Durchschnittswert betraegt %f.", x);

	return 0;

}

float durchschnitt(int anz, ...) {

	va_list arg_ptr;
	int count,
	    gesamt = 0;

	va_start(arg_ptr, anz);

	for (count = 0; count < anz; count++)
		gesamt += va_arg(arg_ptr, int);

	va_end(arg_ptr);

	return ((float)gesamt/anz);

}
