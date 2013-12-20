#include <stdio.h>

double quadrat(double x);
double (*p)(double x);

int main() {

	p = quadrat;

	/* call function and pointer to function */
	printf("%f %f", quadrat(6.6), p(6.6));

	return(0);

}

double quadrat(double x) {

	return x * x;

}
