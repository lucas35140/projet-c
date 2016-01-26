#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Include Maison*/

#include "affichage.h"
#include "comptage.h"


void Affichchaine(char * Pointeur) {

	int nombre = 0;

	printf("\nSaisir la phrase :\n\n");
	fgets(Pointeur, 61, stdin);

	*(Pointeur + strlen(Pointeur) - 1) = "\0";

	nombre = NombreMots(Pointeur);

	printf("\nLe nombre de mots est : %d\n", nombre);

}