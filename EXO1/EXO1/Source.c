#include "tp4.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	HEURE HeureDebut, HeureFin, Duree;
	HeureDebut.heure = 12;
	HeureDebut.minute = 30;
	Duree.heure = 0;
	Duree.minute = 45;

	HeureFin.minute = HeureDebut.minute + Duree.minute;
	HeureFin.heure = HeureDebut.heure + Duree.heure;
	if (HeureFin.minute > 60) {
		HeureFin.heure += 1;
		HeureFin.minute = HeureFin.minute % 60;
	}
	printf("L'heure de fin est %02d:%02d", HeureFin.heure, HeureFin.minute);

}


