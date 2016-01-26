#include "comptage.h"

int NombreMots(char * Pointeur) {

	int i = 0;
	int nombre = 0;

	while (*(Pointeur + i) != '\0') {

		if (*(Pointeur + i) == 32 && *(Pointeur + i + 1) != 32)
		{
			nombre++;
		}

		i++;
	}
	if (*(Pointeur + i) == '\0') {
		nombre++;
	}
	return nombre;
}