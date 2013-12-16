#include <stdio.h>

float x=3.5, y=65.11, z;

float haelfte_von(float k);

int main(void) {
	z = haelfte_von(x);
	printf("Der Wert von z = %f\n", z);

	z = haelfte_von(y);
	printf("Der Wert von z = %f\n", z);

	return 0;
}


float haelfte_von(float k) {
	return (k / 2);
}
