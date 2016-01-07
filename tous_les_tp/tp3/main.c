#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int choix = 0;

	do
	{
		int min = 0;
		int max = 101;

		int tour = 0;

		printf("Joueur 1 !\n");
		int first = 0;

		do
		{
			printf("Donner une valeur entre 0 et 100\n");
			scanf_s("%d", &first);

		} while (first < min || first > max);
		system("cls");


		int trouve = max / 2;

		tour++;

		do
		{
			if (trouve < first)
			{
				min = trouve;
				trouve = (min + max) / 2;
			}
			if (trouve > first)
			{
				max = trouve;
				trouve = max / 2;
			}
			tour++;
		} while (first != trouve);

		printf("Le rez est %d\n", trouve);
		printf("Le nombre de tour est : %d\n", tour);

		printf("reco ? \n 1 = oui\n 2 = non\n");

		scanf("%d", &choix);

	} while (choix == 1);


}