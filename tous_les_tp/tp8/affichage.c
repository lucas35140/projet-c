#include "affichage.h"
#include "traitement.h"
#include <stdio.h>
void ecrireChaine(char chaine[100]) {
	printf("\nEcriture de chaine \n\n");
	printf("\n Ecrire Chaine : \n");
	scanf("%s", chaine);
}
void MenuTailledechaine(char chaine[100]) {
	printf("\nTaille de la chaine\n\n");
	int rez = Tailledechaine(chaine);
	printf("La taille de la chaine est de %d\n", rez);
}
void MenuCopierChaine(char chaine[100], char chaine2[100]) {
	printf("Copier la chaine\n");
	CopierChaine(chaine, chaine2);
	printf("\n La chaine '%s' a ete copier : '%s' \n", chaine, chaine2);
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
		printf("La chaine se trouve en : %d\n", position);
	}
}
void MenuMinuscule(char chaine[100]) {

	printf("\n Mettre la chaine de caracteres en minuscule\n\n");
	Minuscule(chaine);
	printf("La chaine devient ============ %s\n", chaine);

}
void MenuMajuscule(char chaine[100]) {
	printf("\n Mettre la chaine de caracteres en majuscule\n\n");
	Majuscule(chaine);
	printf("La chaine devient ============ %s\n", chaine);
}