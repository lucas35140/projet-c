
#include <stdio.h>
#include <stdlib.h>

#include "affichage.h"

int main(int argc, char *argv[])
{
	int choix = 0;
	char chaine[100] = "Hello";
	char chaine2[100] = "test";


	do
	{
		system("cls");

		printf("\nLa chaine en cour est : \n\n");
		printf("%s\n", chaine);


		printf("\n========= MENU =========\n\n");
		printf("1 -- Ecrire chaine\n");
		printf("2 -- Taille d'une chaine\n");
		printf("3 -- Copier la chaine\n");
		printf("4 -- Comparer les deux chaines\n");
		printf("5 -- Rechercher un caractere dans la chaine de caracteres\n");
		printf("6 -- Recherche une chaine de caracteres dans la chaine de caracteres\n");
		printf("7 -- Mettre la chaine de caracteres en minuscule\n");
		printf("8 -- Mettre la chaine de caracteres en majuscule\n");

		scanf("%d", &choix);
		switch (choix)

		{
		case 1:
			ecrireChaine(chaine);
			system("pause");
			break;
		case 2:
			MenuTailledechaine(chaine);
			system("pause");
			break;
		case 3:
			MenuCopierChaine(chaine, chaine2);
			system("pause");
			break;
		case 4:
			MenuComparerChaine(chaine, chaine2);
			system("pause");
			break;
		case 5:
			MenuRechercheCarac(chaine, chaine2);
			system("pause");
			break;
		case 6:
			MenuRechercheChaine(chaine, chaine2);
			system("pause");
			break;
		case 7:
			MenuMinuscule(chaine);
			system("pause");
			break;
		case 8:
			MenuMajuscule(chaine);
			system("pause");
			break;
		default:
			break;

		}

	} while (choix != 0);
	return 0;
}


