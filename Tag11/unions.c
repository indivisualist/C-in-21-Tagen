#include <stdio.h>

int main(void) {
	
	union u_shared {
		char	c;
		int	i;
		long	l;
		float	f;
		double	d;
	} shared;

	shared.c = '$';

	printf("\nchar c	= %c", shared.c);
	printf("\nint i		= %d", shared.i);
	printf("\nlong l	= %ld", shared.l);
	printf("\nfloat f	= %f", shared.f);
	printf("\ndouble d	= %f", shared.d);

	shared.d = 123456789.8765;

	printf("\n\nchar c	= %c", shared.c);
	printf("\nint i		= %d", shared.i);
	printf("\nlong l	= %ld", shared.l);
	printf("\nfloat f	= %f", shared.f);
	printf("\ndouble d	= %f", shared.d);

	return 0;

}
