#include "traitement.h"

int division(int x, int y, int* rez) {
	int modulo = 0;

	*rez = x / y;
	modulo = x % y;

	return modulo;
}

void decoupeMinute(int * heure, int * minute, int * jour) {

	*heure = 0, *jour = 0;

	if (*minute >= 60) {
		*heure = *minute / 60;
		*minute = *minute % 60;
	}
	if (*heure >= 24)
	{
		*jour = *heure / 24;
		*heure = *heure % 24;
	}
}

void decoupeOctet(int*octet, int*kilooctet, int*megaoctet) {

	*kilooctet = 0, *megaoctet = 0;

	if (*octet >= 1024) {
		*kilooctet = *octet / 1024;
		*octet = *octet % 1024;
	}

	if (*kilooctet >= 1024) {

		*megaoctet = *kilooctet / 1024;
		*kilooctet = *kilooctet % 1024;
	}
}

void inverter(int*a, int*b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}



