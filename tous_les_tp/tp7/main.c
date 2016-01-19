#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 10
#include "affichage.h"


/*
void MenuInverserTableau(int tableau[], int tailleTableau);
void InverserTableau(int tableau[], int tailleTableau);

void MenuSommeTableauMultiDim();
int SommeTableauMultiDim();

*/

int main(int argc, char *argv[])
{
	int choix = 0;
	int tailleTableau = TAILLE;
	int tableau[TAILLE];
	srand(time(NULL));
	InitialiserTableauRandom(tableau, tailleTableau, 100);
	do
	{
		system("cls");
		printf("=== MENU PRINCIPAL ===\n");
		printf("\n");
		printf("Tableau en cours :\n");
		AfficherTableau(tableau, tailleTableau);
		printf("\n\n");
		printf("Choisissez une option :\n");
		printf("1 - Initialiser un tableau en indiquant une valeur\n");
		printf("2 - Somme d'un tableau\n");
		printf("3 - Nombre d'elements d'un tableau\n");
		printf("4 - Plus petite valeur d'un tableau\n");
		printf("5 - Position de la plus petite valeur d'un tableau\n");
		printf("6 - Tester si un tableau est ordonne\n");
		printf("7 - Ordonner un tableau\n");
		printf("8 - Rechercher une valeur dans un tableau ordonne (dichotomique)\n");
		printf("9 - Inverser l'ordre des elements d'un tableau\n");
		printf("10 - Afficher la somme de toutes les lignes et de toutes les colonnes\n");
		printf("0 - Quitter\n");
		scanf("%d", &choix);

		switch (choix)
		{
		case 1:
			MenuInitialiserTableau(tableau, tailleTableau);
			system("pause");
			break;
		case 2:
			MenuSommeTableau(tableau, tailleTableau);
			system("pause");
			break;

		case 3:
			MenuNombreElementsTableau(tableau, tailleTableau);
			system("pause");
			break;

		case 4:
			MenuPlusPetitElementTableau(tableau, tailleTableau);
			system("pause");
			break;

		case 5:
			MenuPositionPlusPetitElementTableau(tableau, tailleTableau);
			system("pause");
			break;

		case 6:
			MenuTableauEstOrdonne(tableau, tailleTableau);
			system("pause");
			break;

		case 7:
			MenuOrdonneTableau(tableau, tailleTableau);
			break;
			
		case 8:
			MenuRechercheDichotomique(tableau, tailleTableau);
			system("pause");
			break;
			/*
		case 9:
			MenuInverserTableau(tableau, tailleTableau);
			break;
		case 10:
			MenuSommeTableauMultiDim();
			break;*/
		default:
			break;
		}
	} while (choix != 0);

	return 0;
}

