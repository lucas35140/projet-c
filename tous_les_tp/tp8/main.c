#include <stdio.h>
#include <stdlib.h>
void ecrireChaine(char chaine[100]);
int Tailledechaine(char chaine[100]);
void MenuTailledechaine(char chaine[100]);
void CopierChaine(char chaine[100], char chaine2[100]);
void MenuCopierChaine(char chaine[100], char chaine2[100]);
void MenuComparerChaine(char chaine[100], char chaine2[100]);
int ComparerChaine(char chaine[100], char chaine2[100]);

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
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		default:
			break;

		}

	} while (choix != 0);
	return 0;
}

/*Ecriture*/
void ecrireChaine(char chaine[100]) {
	printf("\nEcriture de chaine \n\n");
	printf("\n Ecrire Chaine : \n");
	scanf("%s", chaine);
}


/*Taille de chaine*/

int Tailledechaine(char chaine[100]) {
	char i = 0;

	while (chaine[i] != '\0')
	{
		i++;
	}
	return i;
}

void MenuTailledechaine(char chaine[100]) {
	printf("\nTaille de la chaine\n\n");
	int rez = Tailledechaine(chaine);
	printf("La taille de la chaine est de %d\n", rez);
}

void CopierChaine(char chaine[100], char chaine2[100]) {

	int i = 0;
	int j = 0;

	while (chaine[i] != '\0')
	{
		chaine2[j] = chaine[i];
		i++;
		j++;
	}
	chaine2[j] = '\0';
}

void MenuCopierChaine(char chaine[100], char chaine2[100]) {
	printf("Copier la chaine\n");
	CopierChaine(chaine, chaine2);
	printf("\n La chaine '%s' a ete copier : '%s' \n", chaine, chaine2);
}

int ComparerChaine(char chaine[100], char chaine2[100]) {
	int i = 0;
	int j = 0;
	int verif = 0;

	while (chaine[i] != '\0')
	{

		if (chaine[i] != chaine2[j]) {
			verif = 1;
		}

		i++;
		j++;
	}
	return verif;
}

void MenuComparerChaine(char chaine[100], char chaine2[100]) {


	int verif;

	printf("\nComparer deux chaines\n\n");

	printf("Ecrire la deuxieme chaine : \n");
	scanf("%s", chaine2);

	verif = ComparerChaine(chaine, chaine2);

	if (verif == 1) {
		printf("Les deux chaine ne sont pas identique \n");
	}

	else if (verif == 0) {
		printf("Les deux chaine sont identique \n");
	}

}

int RechercheChaine(char chaine[100], char chaine2[100]) {

	int i = 0, j = 0;
	int position = -1;
	while (chaine[i] != '\0')
	{
		

	}
}