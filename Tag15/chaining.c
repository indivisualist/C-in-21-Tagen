#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct daten {
	char name[20];
	struct daten *next;
};
typedef struct daten PERSON;
typedef PERSON *LINK;

int main(void) {

	LINK head = NULL;
	LINK neu = NULL;
	LINK aktuell = NULL;
	
	/* insert first element */
	neu = (LINK)malloc(sizeof(PERSON));
	neu->next = head;
	head = neu;
	strcpy(neu->name, "Abigail");

	/* insert element at the end */
	aktuell = head;
	while (aktuell->next != NULL)
		aktuell = aktuell->next;

	neu = (LINK)malloc(sizeof(PERSON));
	aktuell->next = neu;
	neu->next = NULL;
	strcpy(neu->name, "Katharina");

	/* add element at position two */
	neu = (LINK)malloc(sizeof(PERSON));
	neu->next = head->next;
	head->next = neu;
	strcpy(neu->name, "Beatrice");

	/* output elements */
	aktuell = head;
	while (aktuell != NULL) {
		printf("%s\n", aktuell->name);
		aktuell = aktuell->next;
	}

	return(0);

}
