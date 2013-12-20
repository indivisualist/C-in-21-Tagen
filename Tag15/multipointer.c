#include <stdio.h>

void printarray_1(int (*zgr)[4]);
void printarray_2(int (*zgr)[4], int n);

int main() {

	int multi[3][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 } };

	int (*zgr)[4], count;
	zgr = multi;

	for (count=0; count<3; count++)
		printarray_1(zgr++);

	puts("\nEingabetaste druecken ...");
	getchar();

	printarray_2(multi, 3);
	printf("\n");

	return 0;

}

void printarray_1(int (*zgr)[4]) {

	int *p,
	    count;
	p = (int *)zgr;

	for (count=0; count<4; count++)
		printf("\n%d", *p++);

}

void printarray_2(int (*zgr)[4], int n) {

	int *p,
	    count;
	p = (int *)zgr;

	for (count=0; count<(4*n); count++)
		printf("\n%d", *p++);

}
