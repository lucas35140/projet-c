#include "traitement.h"
#include <stdlib.h>

void InitialiserTableauRandom(int tableau[], int tailleTableau, int max) {
	int i = 0;
	while (i < tailleTableau)
	{
		tableau[i] = rand() % max;
		i++;
	}
}
void InitialiserTableau(int tableau[], int tailleTableau, int val) {

	int i = 0;
	while (i < tailleTableau)
	{
		tableau[i] = val;
		i++;
	}
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
int NombreElementsTableau(int tableau[], int tailleTableau) {
	int i = 0;
	while (i < tailleTableau)
	{
		i++;
	}
	return i;
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