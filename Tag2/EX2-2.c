#include <stdio.h>

void display_line(void);

int main() {
	display_line();
	printf("wheeeee");
	display_line();
	return 0;
}

void display_line() {
	int counter;
	for (counter=0; counter<21; counter++)
		printf("*");
}
