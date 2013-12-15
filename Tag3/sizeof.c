/* Groesse von C-Datentypen ausgeben */

#include <stdio.h>

int main() {
	printf("\nEin char	belegt %d Bytes", sizeof(char));
	printf("\nEin int	belegt %d Bytes", sizeof(int));
	printf("\nEin short	belegt %d Bytes", sizeof(short));
	printf("\nEin long	belegt %d Bytes", sizeof(long));
	printf("\nEin u. char	belegt %d Bytes", sizeof(unsigned char));
	printf("\nEin u. int	belegt %d Bytes", sizeof(unsigned int));
	printf("\nEin u. short	belegt %d Bytes", sizeof(unsigned short));
	printf("\nEin u. long	belegt %d Bytes", sizeof(unsigned long));
	printf("\nEin float	belegt %d Bytes", sizeof(float));
	printf("\nEin double	belegt %d Bytes", sizeof(double));

	return 0;
}

