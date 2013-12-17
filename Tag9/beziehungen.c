#include <stdio.h>

short s[10];
int i[10],
    x;
float f[10];
double d[10];

int main(void) {
	/* heading */
	printf("\n%19s %10s %10s %10s", "Short", "Integer", "Float", "Double");
	printf("\n================================");
	printf("================================");

	/* output */
	for (x=0; x<10; x++)
		printf("\n Element %d: %lu %lu %lu %lu", x,
				(unsigned long)&s[x],
				(unsigned long)&i[x],
				(unsigned long)&f[x],
				(unsigned long)&d[x]);
		
	printf("\n================================");
	printf("================================");

	return 0;
}
