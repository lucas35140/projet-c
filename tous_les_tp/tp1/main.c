#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("Joueur 1 !\n");
	int first = 0;
	do
	{
		printf("Donner une valeur entre 0 et 100\n");
		scanf_s("%d", &first);

	} while (first < 0 || first > 100);
	system("cls");


	int trouve = 0;
	printf("Joueur 2 !\n");

	do
	{
		printf("Donne une valeur entre 0 et 100\n");
		scanf_s("%d", &trouve);
		if (first > trouve){
			printf("C'est plus !\n");

		}
		if (first < trouve){
			printf("C'est moins !\n");

		}

	} while (trouve != first);

	printf("Tu as trouve le chiffre !\nChiffre trouve : %d\n", trouve);
	system("pause");

	return 0;

}