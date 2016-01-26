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


	AfficherPendu();

	printf("\n\n================ Le Pendu ==================\n\n");

	printf("          Joueur 1 Saisir le mot \n");

	fflush(stdin);
	scanf("%s", principal);

	system("cls");

	Transformation(principal, secondaire);


	while (test == 0)
	{
		int lavie = 0;

		AfficherPendu();

		printf("\n\n================ Le Pendu ==================\n\n");

		printf("         Mot a trouver   "); AffichTransformation(secondaire);

		printf("\n    Il vous reste: ");
		while (lavie < vie) {

			printf("\x3 ");
			lavie++;
		}
		printf("\n");



		printf("\n         Joueur 2 Saisir une lettre:\n");


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
		AfficherPendu();


		printf("\n\n\n\n");
		printf(" =============================================\n\n");

		printf("     _____  ______ _____  _____  _    _ _ \n");
		printf("    |  __ \\|  ____|  __ \\|  __ \\| |  | | |\n");
		printf("    | |__) | |__  | |__) | |  | | |  | | |\n");
		printf("    |  ___/|  __| |  _  /| |  | | |  | | |\n");
		printf("    | |    | |____| | \\ \\| |__| | |__| |_|\n");
		printf("    |_|    |______|_|  \\_\\_____/ \\____/(_)\n");

		printf("\n\n =============================================\n\n");



		printf("            Tu n'as plus de vie\n\n");
		printf("          Le mot a trouver etait : %s\n\n\n", principal);

	}
	else
	{
		AfficherPendu();

		printf("\n\n\n\n");
		printf(" =============================================\n\n");

		printf("                _____  _____ \n");
		printf("               / ____|/ ____|\n");
		printf("              | |  __| |  __ \n");
		printf("              | | |_ | | |_ |\n");
		printf("              | |__| | |__| |\n");
		printf("               \\_____|\\_____|\n");



		printf("\n\n =============================================\n\n");

		printf("               Tu as GAGNE !\n\n\n");
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

void AfficherPendu() {
	printf("  _____    ______   _   _   _____    _    _ \n");
	printf(" |  __ \\  |  ____| | \\ | | |  __ \\  | |  | |\n");
	printf(" | |__) | | |__    |  \\| | | |  | | | |  | |\n");
	printf(" |  ___/  |  __|   | . ` | | |  | | | |  | |\n");
	printf(" | |      | |____  | |\\  | | |__| | | |__| |\n");
	printf(" |_|      |______| |_| \\_| |_____/   \\____/ \n");
}