#include <stdio.h>
#include <assert.h>

int main(void) {

	int x;

	printf("Geben Sie einen Integer-Wert ein: ");
	scanf("%d", &x);

	assert(x >= 0);

	printf("Ihre Eingabe lautete %d.", x);

	return(0);

}
