#include <stdio.h>

int main(int argc, char *argv[]) {

	int count;

	printf("Programmname: %s\n", argv[0]);

	if (argc > 1) {
		for (count = 1; count < argc; count++)
			printf("Argument %d: %s\n", count, argv[count]);
	}
	else
		puts("Keine Befehlszeilenargumente eingegeben.");

	return 0;

}
