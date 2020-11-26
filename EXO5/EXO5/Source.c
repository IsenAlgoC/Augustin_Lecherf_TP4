#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define LONGUEURPHRASE 1024


int main() {
	char phrase[LONGUEURPHRASE];					
	int mots = 1;
	float moyenne = 0;
	int espace = 0;

	printf("Saisissez une phrase : ");

	gets_s(phrase, LONGUEURPHRASE);				// prise en compte des caractères entrés par l'utilisateur

	for (int i = 1; i < strlen(phrase); i++) {
		if (phrase[i] == ' ') {			// si il y a un espace			
			++mots;				// alors il y a un nouveau mot
			++espace;           
		}
	}
		
	moyenne = (float)(strlen(phrase) - espace)/mots;

	printf("\nVotre phrase contient %d mots avec une moyenne de %.2f caracteres", mots, moyenne);
}