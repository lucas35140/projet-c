#include "pendu.h"


void Longueuchaine2(char chaine[], char chaine2[]) {
	int i = 0;
	int j = 0;
	while (chaine[i] != '\0')
	{
		chaine2[j] = '_';
		i++;
		j++;
	}
	chaine2[j] = '\0';
}

void TestCaract(char chaine[], char chaine2[], char saisie) {
	int i = 0;
	int j = 0;
	int test = 0;

	while (chaine[i] != '\0')
	{
		if (chaine[i] == saisie) {
			j = i;
			chaine2[j] = saisie;
			test = 1;
		}
		i++;
	}
	
}

