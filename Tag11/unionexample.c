#include <stdio.h>

#define CHARACTER	'C'
#define INTEGER		'I'
#define FLOAT		'F'

struct s_generisch {
	char typ;
	union u_shared {
		char	c;
		int	i;
		float	f;
	} shared;
};

void ausgabe(struct s_generisch generisch);

int main(void) {

	struct s_generisch var;

	var.typ = CHARACTER;
	var.shared.c = '$';
	ausgabe(var);

	var.typ = FLOAT;
	var.shared.f = (float) 12345.67890;
	ausgabe(var);

	var.typ = 'x';
	var.shared.i = 111;
	ausgabe(var);

	return 0;

}

void ausgabe(struct s_generisch generisch) {

	printf("\nDer generische Wert ist ... ");
	
	switch (generisch.typ) {
		case CHARACTER :
			printf("%c\n", generisch.shared.c);
			break;
		case INTEGER :
			printf("%d\n", generisch.shared.i);
			break;
		case FLOAT :
			printf("%f\n", generisch.shared.f);
			break;
		default :
			printf("Typ unbekannt: %c\n", generisch.typ);
			break;
	}

}
