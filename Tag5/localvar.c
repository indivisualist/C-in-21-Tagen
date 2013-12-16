#include <stdio.h>

int x=1, y=2;

void demo(void);

int main(void) {
	printf("Vor dem Aufruf von demo(), x=%d und y=%d.", x, y);
	demo();
	printf("Nach dem Aufruf von demo(), x=%d und y=%d.", x, y);

	return 0;
}

void demo(void) {
	int x=88, y=99;
	printf("In der Funktion demo(), x=%d und y=%d", x, y);
}
