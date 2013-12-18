#include <stdio.h>

#define MAX 4

struct teil {
	int zahl;
	char name[10];
} daten[MAX] = {
	{ 1, "Schmidt" },
	{ 2, "Meier" },
	{ 3, "Adams" },
	{ 4, "Walter" }
};
struct teil *z_teil;
int count;

int main() {

	z_teil = daten;
	for (count=0; count<MAX; count++) {
		printf("An Adresse %lu: %d %s\n",
				(unsigned long)z_teil, z_teil->zahl, z_teil->name);
		z_teil++;
	}

	return 0;

}
