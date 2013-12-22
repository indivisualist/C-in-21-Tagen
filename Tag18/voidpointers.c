#include <stdio.h>

void haelfte(void *x, char type);

int main() {

	int i = 20;
	long l = 100000;
	float f = 12.345;
	double d = 123.222222;

	printf("\n%d", i);
	printf("\n%ld", l);
	printf("\n%f", f);
	printf("\n%lf\n\n", d);

	haelfte(&i, 'i');
	haelfte(&l, 'l');
	haelfte(&d, 'd');
	haelfte(&f, 'f');

	printf("\n%d", i);
	printf("\n%ld", l);
	printf("\n%f", f);
	printf("\n%lf", d);

	return 0;

}

void haelfte(void *x, char type) {

	switch (type) {

		case 'i': {
			*((int *)x) /= 2;
			break;
			}
		case 'l': {
			*((long *)x) /= 2;
			break;
			}
		case 'f': {
			*((float *)x) /= 2;
			break;
			}
		case 'd': {
			*((double *)x) /= 2;
			break;
			}

	}

}
