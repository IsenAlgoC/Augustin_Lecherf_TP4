#include <stdlib.h>
#include <stdio.h>


int main() {
	int position = 0;
	int recherche;
	int myTab[100];
	time_t t;
	srand(time(&t));
	int i;


	for (position = 0; position < 100; position++) {
		myTab[position] = (rand() % 21);
	}
	printf("Voici le tableau : ");

	for (i = 0; i < 100; i++) {
		printf("%d |", myTab[i]);
	}
	

	printf("\nQuel nombre souhaitez-vous rechercher ? ");
	scanf_s("%d", &recherche);

	int* MyPtr = &myTab[0];
	int trouve = 0;

	printf("\nLe nombre a ete trouve au niveau des positions suivantes : ");

	for (int pos = 1; pos < 101; pos++) {
		if (*MyPtr == recherche) {
			printf("%d, ", pos);	
			trouve++;
		}
		MyPtr++;		
	}

	if (trouve == 0) {
		printf("\nNous sommes desoles, nous n'avons pas trouve votre nombre");
	}

}