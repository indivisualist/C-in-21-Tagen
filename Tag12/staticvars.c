#include <stdio.h>

void funk1(void);

int main(void) {

	int count;

	for (count=0; count<20; count++) {
		printf("In Durchlauf %d: ", count);
		funk1();
	}

	return 0;

}

void funk1(void) {
	static int x = 0;
	int y = 0;
	printf("x = %d, y = %d\n", x++, y++);
}

