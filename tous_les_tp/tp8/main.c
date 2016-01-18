#include <stdio.h>
#include <stdlib.h>
void ecrireChaine(char chaine[100]);
int Tailledechaine(char chaine[100]);
void MenuTailledechaine(char chaine[100]);
void CopierChaine(char chaine[100], char chaine2[100]);
void MenuCopierChaine(char chaine[100], char chaine2[100]);
void MenuComparerChaine(char chaine[100], char chaine2[100]);
int ComparerChaine(char chaine[100], char chaine2[100]);
void MenuRechercheChaine(char chaine[100], char chaine2[100]);
int RechercheChaine(char chaine[100], char chaine2[100]);
void MenuRechercheCarac(char chaine[100], char chaine2[100]);
int RechercheCarac(char chaine[100], char chaine2[100]);
void MenuMinuscule(char chaine[100]);
void Minuscule(char chaine[100]);
void MenuMajuscule(char chaine[100]);
void Majuscule(char chaine[100]);

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


int RechercheCarac(char chaine[100], char chaine2[100]) {
	int i = 0, j = 0;
	int position = -1;

	while (chaine[i] != '\0')
	{
		if (chaine[i] == chaine2[j]) {
			position = i;
			return position;
		}
	}
	return position;
}

void MenuRechercheCarac(char chaine[100], char chaine2[100]) {
	printf("\n Recherche de Caractere\n\n");
	printf("Saisir le caractere : \n");
	scanf("%s", chaine2);
	int position = RechercheChaine(chaine, chaine2);
	if (position == -1) {
		printf("Le caractere ne se trouve pas dans la chaine\n");
	}
	else
	{
		printf("Le caractere se trouve en : %d\n", position + 1);
	}
}


int RechercheChaine(char chaine[100], char chaine2[100]) {
	int i = 0, j = 0;
	int position = -1;
	int temp_i;
	while (chaine[i] != '\0')
	{
		if (chaine[i] == chaine2[j]) {
			temp_i = i;
			while (chaine[i] == chaine2[j])
			{
				if (chaine2[j] >= '\0')
				{
					position = temp_i;
					return position;
				}

				i++;
				j++;
			}
		}
		else if (chaine[i] != chaine2[j]) {
			temp_i = i;
			j = 0;
		}
		i = temp_i;
		i++;
	}
	return position;
}

void MenuRechercheChaine(char chaine[100], char chaine2[100]) {
	printf("\n Recherche de chaine\n\n");
	printf("Saisir la deuxieme chaine : \n");
	scanf("%s", chaine2);
	int position = RechercheChaine(chaine, chaine2);
	if (position == -1) {
		printf("La chaine ne se trouve pas dans la chaine\n");
	}
	else
	{
		printf("La chaine se trouve en : %d\n", position + 1);
	}
}

void Minuscule(char chaine[100]) {

	int i = 0;

	while (chaine[i] != '\0')
	{
		if (chaine[i] >= 65 && chaine[i] <= 90) {
			chaine[i] = chaine[i] + 32;
		}
		i++;
	}


}
void MenuMinuscule(char chaine[100]) {

	printf("\n Mettre la chaine de caracteres en minuscule\n\n");
	Minuscule(chaine);
	printf("La chaine devient ============ %s\n", chaine);

}


void Majuscule(char chaine[100]) {

	int i = 0;

	while (chaine[i] != '\0')
	{
		if (chaine[i] >= 97 && chaine[i] <= 122) {
			chaine[i] = chaine[i] - 32;
		}
		i++;
	}


}
void MenuMajuscule(char chaine[100]) {

	printf("\n Mettre la chaine de caracteres en majuscule\n\n");
	Majuscule(chaine);
	printf("La chaine devient ============ %s\n", chaine);

}
