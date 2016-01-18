#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE 10

void AfficherTableau(int tableau[], int tailleTableau);

void MenuInitialiserTableau(int tableau[], int tailleTableau);
void InitialiserTableau(int tableau[], int tailleTableau, int val);

void InitialiserTableauRandom(int tableau[], int tailleTableau, int max);

void MenuSommeTableau(int tableau[], int tailleTableau);
int SommeTableau(int tableau[], int tailleTableau);


void MenuNombreElementsTableau(int tableau[], int tailleTableau);
int NombreElementsTableau(int tableau[], int tailleTableau);

void MenuPlusPetitElementTableau(int tableau[], int tailleTableau);
int PlusPetitElementTableau(int tableau[], int tailleTableau);

void MenuPositionPlusPetitElementTableau(int tableau[], int tailleTableau);
int PositionPlusPetitElementTableau(int tableau[], int tailleTableau);
/*
void MenuTableauEstOrdonne(int tableau[], int tailleTableau);
int TableauEstOrdonne(int tableau[], int tailleTableau, int asc);

*/
void MenuOrdonneTableau(int tableau[], int tailleTableau);
int OrdonneTableau(int tableau[], int tailleTableau, int asc);
/*
void MenuRechercheDichotomique(int tableau[], int tailleTableau);
int RechercheDichotomique(int tableau[], int tailleTableau, int val);

void MenuInverserTableau(int tableau[], int tailleTableau);
void InverserTableau(int tableau[], int tailleTableau);

void MenuSommeTableauMultiDim();
int SommeTableauMultiDim();*/

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
			/*
		case 6:
			MenuTableauEstOrdonne(tableau, tailleTableau);
			system("pause");
			break;
			
		case 7:
			MenuOrdonneTableau(tableau, tailleTableau);
			break;
		case 8:
			MenuRechercheDichotomique(tableau, tailleTableau);
			break;
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

void InitialiserTableauRandom(int tableau[], int tailleTableau, int max) {
	int i = 0;
	while (i < tailleTableau)
	{
		tableau[i] = rand() % max;
		i++;
	}
}


void AfficherTableau(int tableau[], int tailleTableau) {
	int i = 0;
	printf("Les valeur du tableau : \n");
	printf("| ");
	while (i < tailleTableau)
	{
		printf("%d |", tableau[i]);
		i++;
	}
	printf("\n\n");
}


void MenuInitialiserTableau(int tableau[], int tailleTableau) {
	int valeur;
	int i = 0;
	printf("Saisir les valeurs à insérer dans toutes les cases du tableau");
	fflush(stdin);
	scanf("%d", &valeur);
	InitialiserTableau(tableau, tailleTableau, valeur);
}

void InitialiserTableau(int tableau[], int tailleTableau, int val) {

	int i = 0;
	while (i < tailleTableau)
	{
		tableau[i] = val;
		i++;
	}
}


void MenuSommeTableau(int tableau[], int tailleTableau) {
	printf("Somme du Tableau : \n");
	int rez = SommeTableau(tableau, tailleTableau);
	printf("La somme du tableau est de %d\n", rez);

}


int SommeTableau(int tableau[], int tailleTableau) {

	int i = 0;
	int rez = 0;
	while (i < tailleTableau)
	{
		rez = rez + tableau[i];
		i++;
	}
	return rez;
}

void MenuNombreElementsTableau(int tableau[], int tailleTableau) {
	printf("Nombre d'element : \n");
	int valeur = NombreElementsTableau(tableau, tailleTableau);
	printf("Il y a %d\n", valeur);
}
int NombreElementsTableau(int tableau[], int tailleTableau) {

	int i = 0;

	while (i < tailleTableau)
	{
		i++;
	}
	return i;
}

void MenuPlusPetitElementTableau(int tableau[], int tailleTableau) {
	printf("Le plus petit element : \n");
	int rez = PlusPetitElementTableau(tableau, tailleTableau);
	printf("Le plus petit element est %d\n", rez);
}
int PlusPetitElementTableau(int tableau[], int tailleTableau) {
	int i = 0;
	int rez = tableau[i];

	while (i < tailleTableau)
	{
		if (tableau[i] < rez)
		{
			rez = tableau[i];
		}
		i++;
	}
	return rez;
}

void MenuPositionPlusPetitElementTableau(int tableau[], int tailleTableau) {
	printf("La position du plus petit \n");
	int rez = PositionPlusPetitElementTableau(tableau, tailleTableau);
	printf("La position est : %d\n", rez + 1);
}

int PositionPlusPetitElementTableau(int tableau[], int tailleTableau) {
	int i = 0;
	int petit = tableau[0];
	int rez = 0;

	while (i < tailleTableau) {

		if (tableau[i] < petit)
		{
			petit = tableau[i];
			rez = i;
		}
		i++;
	}
	return rez;
}

void MenuOrdonneTableau(int tableau[], int tailleTableau) {

}
int OrdonneTableau(int tableau[], int tailleTableau, int asc) {

}