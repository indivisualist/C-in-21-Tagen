#include <stdio.h>

int x, y;

int main(void) {
	printf("Integer fuer x: ");
	scanf("%d", &x);
	printf("Integer fuer y: ");
	scanf("%d", &y);

	if (x == y)
		printf("x ist gleich y");
	else
		if (x > y)
			printf("x ist groesser als y");
		else
			printf("x ist kleiner als y");

	return 0;
}
