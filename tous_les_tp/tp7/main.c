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



void MenuTableauEstOrdonne(int tableau[], int tailleTableau);
int TableauEstOrdonne(int tableau[], int tailleTableau, int asc);


void MenuOrdonneTableau(int tableau[], int tailleTableau);
void OrdonneTableau(int tableau[], int tailleTableau, int asc);

void MenuRechercheDichotomique(int tableau[], int tailleTableau);
int RechercheDichotomique(int tableau[], int tailleTableau, int val);
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

void MenuTableauEstOrdonne(int tableau[], int tailleTableau) {
	int asc;
	printf("\n Tester si un tableau est ordonne\n\n");

	printf("Donner un type : \n 0 = croissant \n 1 = Decroissant\n");

	fflush(stdin);

	scanf("%d", &asc);

	int test = TableauEstOrdonne(tableau, tailleTableau, asc);

	if (test == 0) {
		printf("Le tableau est ordonner\n");
	}
	else if (test == 1) {
		printf("Le tableau n'est pas ordonner\n");
	}

}

int TableauEstOrdonne(int tableau[], int tailleTableau, int asc) {
	int i = 0;
	int test = 0;
	while (i < tailleTableau)
	{
		while (asc == 0)
		{
			if (tableau[i] > tableau[i + 1]) {
				test = 1;
				return test;
			}
			i++;
		}
		while (asc == 1)
		{
			if (tableau[i] < tableau[i + 1]) {
				test = 1;
				return test;
			}
			i++;
		}
	}
	return test;
}

void MenuOrdonneTableau(int tableau[], int tailleTableau) {
	int saisie = 0;

	printf("Voulez-vous ordonne de maniere croisante ? 0 -> non ; 1 -> oui mais n'ecrivez pas blablabla \n");
	fflush(stdin);
	scanf("%d", &saisie);

	OrdonneTableau(tableau, tailleTableau, saisie);

	printf("Votre tableau est ordonne\n");
}
void OrdonneTableau(int tableau[], int tailleTableau, int asc) {
	int i = 0;
	int j = 0;
	int temp;
	int positionValeur = -1;
	int valeur = tableau[0];

	while (i < tailleTableau) {
		valeur = tableau[i];
		j = i + 1;
		positionValeur = -1;
		while (j < tailleTableau) {
			if ((asc && tableau[j] < valeur) || (!asc && tableau[j] > valeur)) {
				positionValeur = j;
				valeur = tableau[j];
			}
			j++;
		}
		if (positionValeur >= 0) {
			temp = tableau[i];
			tableau[i] = tableau[positionValeur];
			tableau[positionValeur] = temp;
		}
		i++;
	}

}
void MenuRechercheDichotomique(int tableau[], int tailleTableau) {
	printf("\nRecherche de valeur \n\n");

	int val;
	printf("Taper valeur a trouver : \n");
	scanf("%d", &val);

	int rez = RechercheDichotomique(tableau, tailleTableau, val);

	if (rez == -1) {
		printf("La valeur n'est pas dans le tableau\n");
	}
	else
	{
		printf("La valeur est dans la case : %d\n", rez + 1);
	}

}
int RechercheDichotomique(int tableau[], int tailleTableau, int val) {

	int test = 0;
	int rez = -1;
	int min = 0;
	int max = tailleTableau;
	int trouve;

	trouve = max / 2;
	while ((min <= max) && (test == 0))
	{
		trouve = (min + max) / 2;

		if (tableau[trouve] == val) {

			rez = trouve;
			test = 1;

		}
		else {
			if (tableau[trouve] < val) {

				min = trouve;
				trouve = (min + max) / 2;
			}
			else if (tableau[trouve] > val) {
				max = trouve;
				trouve = max / 2;

			}
		}
	}

	return rez;

}