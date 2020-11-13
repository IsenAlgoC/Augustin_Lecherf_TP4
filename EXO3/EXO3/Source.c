#include<stdlib.h>
#include<stdio.h>

int main() {
	char nom[20] = { 0 };
	char prenom[20] = { 0 };
	printf("Entrer votre nom :");
	scanf_s("%s", nom, (unsigned)_countof(nom));
	printf("Entrer votre prenom :");
	scanf_s(" %s", prenom, (unsigned)_countof(prenom));
	char sexe;
	printf("Entrer votre sexe (H ou F) :\n");
	sexe = (char)_getch();
	if ((sexe == 'h') || (sexe == 'H')) {
		printf("Monsieur ");
	}
	else {
		printf("Madame ");
	}
	printf("%s %s\n", nom, prenom);
	system("pause");

}