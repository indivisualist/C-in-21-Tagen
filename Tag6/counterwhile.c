#include <stdio.h>

int count;

int main(void) {
	count = 1;
	while (count <= 20) {
		printf("%d ", count);
		count++;
	}
	return 0;
}
