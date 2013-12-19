#include <stdio.h>

int main(void) {

	int count = 0;

	printf("Ausserhalb des Blocks, count = %d", count);

	{
		int count = 999;
		printf("\nInnerhalb des Blocks, count = %d", count);
	}

	printf("\nWieder ausserhalb des Blocks, count = %d", count);

	return 0;

}
