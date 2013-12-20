#include <stdio.h>

int multi[2][4];

int main() {

	printf("multi = %lu\n", (unsigned long)multi);
	printf("multi[0] = %lu\n", (unsigned long)multi[0]);
	printf("&multi[0][0] = %lu\n", (unsigned long)&multi[0][0]);

	printf("Die Groesse von multi = %u\n", sizeof(multi));
	printf("Die Groesse von multi[0] = %u\n", sizeof(multi[0]));
	printf("Die Groesse von multi[0][0] = %u\n", sizeof(multi[0][0]));

	return(0);

}
