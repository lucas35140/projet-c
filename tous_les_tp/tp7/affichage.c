#include <stdio.h>
#include "affichage.h"
#include "traitement.h"


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




void MenuSommeTableau(int tableau[], int tailleTableau) {
	printf("Somme du Tableau : \n");
	int rez = SommeTableau(tableau, tailleTableau);
	printf("La somme du tableau est de %d\n", rez);

}




void MenuNombreElementsTableau(int tableau[], int tailleTableau) {
	printf("Nombre d'element : \n");
	int valeur = NombreElementsTableau(tableau, tailleTableau);
	printf("Il y a %d\n", valeur);
}


void MenuPlusPetitElementTableau(int tableau[], int tailleTableau) {
	printf("Le plus petit element : \n");
	int rez = PlusPetitElementTableau(tableau, tailleTableau);
	printf("Le plus petit element est %d\n", rez);
}


void MenuPositionPlusPetitElementTableau(int tableau[], int tailleTableau) {
	printf("La position du plus petit \n");
	int rez = PositionPlusPetitElementTableau(tableau, tailleTableau);
	printf("La position est : %d\n", rez + 1);
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



void MenuOrdonneTableau(int tableau[], int tailleTableau) {
	int saisie = 0;

	printf("Voulez-vous ordonne de maniere croisante ? 0 -> non ; 1 -> oui mais n'ecrivez pas blablabla \n");
	fflush(stdin);
	scanf("%d", &saisie);

	OrdonneTableau(tableau, tailleTableau, saisie);

	printf("Votre tableau est ordonne\n");
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