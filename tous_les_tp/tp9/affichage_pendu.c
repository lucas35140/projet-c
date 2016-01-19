#include "pendu.h"
#include "affichage_pendu.h"
#include <stdio.h>
#include <stdlib.h>


void MenuPrincipal() {
	int choix = 0;

	char Premier[20];
	char Deuxieme[20];

	printf("                VIENT TE PENDRE !\n\n");
	printf("     ================ MENU ===================\n\n");
	printf("             1 -- Jouer au PENDU !\n");
	printf("             2 -- Meilleur score\n");
	fflush(stdin);
	scanf("%d", &choix);

	do
	{
		switch (choix)
		{
		case 1:
			printf("Le PENDU !\n\n");
			

			MenuPremierMot(Premier);

			Longueuchaine2(Premier, Deuxieme);

			SaisieCarac(Premier, Deuxieme);

			AffichChaine2(Premier, Deuxieme);

			

			break;
		default:
			break;
		}
	} while (choix != 0);
}

void MenuPremierMot(char mot[]) {
	printf("Joueur 1 !\n\n");

	printf("Taper le mot\n");
	fflush(stdin);
	scanf("%s", mot);

	system("cls");
}
void AffichChaine2(char chaine[], char chaine2[]) {
	int j = 0;
	system("cls");

	printf("Joueur 2 ! \n");
	printf("Mot a trouver\n");

	while (chaine2[j] != '\0')
	{
		printf("%c  ", chaine2[j]);
		j++;
	}
	printf("\n\n");
}

void SaisieCarac(char chaine[], char chaine2[]) {

	char saisie;
	int i = 0;
	printf("Saisir la lettre\n");
	fflush(stdin);
	saisie = getch();

	TestCaract(chaine, chaine2, saisie);
}
