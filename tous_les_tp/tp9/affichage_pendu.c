#include "pendu.h"
#include "affichage_pendu.h"
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void principal() {

	char principal[20];
	char secondaire[20];
	int test = 0;
	int vie = 7;
	int testvie;
	char saisie;

	printf("============== Le Pendu ================\n");

	printf(" Joueur 1 Saisir chaine \n");

	fflush(stdin);
	scanf("%s", principal);

	system("cls");

	Transformation(principal, secondaire);


	while (test == 0)
	{
		printf("============== Le Pendu ================\n");

		AffichTransformation(secondaire);

		printf("Joueur 2 Saisir une lettre:\n");

		printf("Il vous reste %d <3 \n", vie);

		saisie = getch();


		testvie = TestCaractere(principal, secondaire, saisie);

		test = TestChaine(principal, secondaire);
		if (testvie != 1) {
			vie--;
		}

		if (vie == 0) {
			test = 1;
		}
		system("cls");
	}  /*OU VIE = 0 */

	if (vie == 0) {
		printf("Tu n'a plus de vie\n");

	}
	else
	{
		printf("Tu as GAGNE !\n");
	}
	system("pause");
}


void AffichTransformation(char secondaire[]) {
	int i = 0;
	while (secondaire[i] != '\0')
	{
		printf("%c ", secondaire[i]);
		i++;
	}
	printf("\n");
}