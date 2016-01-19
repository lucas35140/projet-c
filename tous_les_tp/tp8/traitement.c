#include "traitement.h"

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

int Tailledechaine(char chaine[100]) {
	char i = 0;
	while (chaine[i] != '\0')
	{
		i++;
	}
	return i;
}