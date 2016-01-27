#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int i = 0;
	int match = 0, temp = 0;
	int resultat1 = 0, resultat2 = 0, ecart = 0, best = 0;
	int victoire = 0, null = 0, perdu = 0;
	printf("Saisir Nombre de match\n\n");
	scanf("%d", &match);
	int * equipe1 = calloc(sizeof(int), match);
	int * equipe2 = calloc(sizeof(int), match);
	while (i < match)
	{
		printf("Saisir Resultat equipe 1 du match %d :\n", i+1);
		fflush(stdin);
		scanf("%d", &resultat1);
		*(equipe1 + i) = resultat1;
		printf("Saisir Resultat equipe 2 du match %d :\n", i+1);
		fflush(stdin);
		scanf("%d", &resultat2);
		*(equipe2 + i) = resultat2;
		ecart = resultat1 - resultat2;
		if (best <= ecart) {
			best = ecart;
			temp = i;
		}
		if (ecart >= 1) {
			victoire++;
		}
		else if (ecart == 0) {
			null++;
		}
		else if (ecart < 0) {
			perdu++;
		}
		i++;
	}
	system("cls");
	printf("Votre equipe a gagne %d match, fait %d match nul et a perdu %d match\n\n", victoire, null, perdu);
	printf("Son meilleur ecart etait de %d au match %d\n\n", best, temp+1);
	system("pause");
	return 0;
}