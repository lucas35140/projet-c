#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Pour le pow

int main(int argc, char *argv[])
{

	int choix = 1;
	int choix2 = 0;
	int x;
	int y;
	int resultat;

	do
	{
		printf("Choisir un type de calcul:\n");
		printf("1 - Addition\n");
		printf("2 - Soustraction\n");
		printf("3 - Multiplication\n");
		printf("4 - Division\n");
		printf("5 - Modulo\n");
		printf("6 - Puissance\n");

		printf("Saisir le type de calcul:\n");
		int menu;
		scanf_s_s("%d", &menu);

		if (menu == 1)
		{
			printf("ADDITION ( x + y ):\n");

			if (choix2 == 0)
			{
				printf("Saisir x : ");
				scanf_ss("%d", &x);

				printf("Saisir y : ");
				scanf_s_s("%d", &y);
			}
			else if (choix2 == 1)
			{
				printf("Saisir y : ");
				scanf_s_s("%d", &y);
			}
			else if (choix2 == 2)
			{
				printf("Saisir x : ");
				scanf_s_s("%d", &x);
			}


			resultat = x + y;
		}
		else if (menu == 2)
		{
			printf("SOUSTRACTION ( x - y ):\n");

			if (choix2 == 0)
			{
				printf("Saisir x : ");
				scanf_s_s("%d", &x);

				printf("Saisir y : ");
				scanf_s_s("%d", &y);
			}
			else if (choix2 == 1)
			{
				printf("Saisir y : ");
				scanf_s_s("%d", &y);
			}
			else if (choix2 == 2)
			{
				printf("Saisir x : ");
				scanf_s_s("%d", &x);
			}

			resultat = x - y;
		}
		else if (menu == 3)
		{
			printf("MULTIPLICATION ( x * y ): \n");

			if (choix2 == 0)
			{
				printf("Saisir x : ");
				scanf_s_s("%d", &x);

				printf("Saisir y : ");
				scanf_s_s("%d", &y);
			}
			else if (choix2 == 1)
			{
				printf("Saisir y : ");
				scanf_s_s("%d", &y);
			}
			else if (choix2 == 2)
			{
				printf("Saisir x : ");
				scanf_s_s("%d", &x);
			}

			resultat = x * y;
		}
		else if (menu == 4)
		{
			printf("DIVISION ( x / y ): \n");

			if (choix2 == 0)
			{
				printf("Saisir x : ");
				scanf_s_s("%d", &x);

				printf("Saisir y : ");
				scanf_s_s("%d", &y);
			}
			else if (choix2 == 1)
			{
				printf("Saisir y : ");
				scanf_s_s("%d", &y);
			}
			else if (choix2 == 2)
			{
				printf("Saisir x : ");
				scanf_s_s("%d", &x);
			}

			resultat = x / y;
		}
		else if (menu == 5)
		{
			printf("MODULO ( x modulo y ): \n");

			if (choix2 == 0)
			{
				printf("Saisir x : ");
				scanf_s_s("%d", &x);

				printf("Saisir y : ");
				scanf_s_s("%d", &y);
			}
			else if (choix2 == 1)
			{
				printf("Saisir y : ");
				scanf_s_s("%d", &y);
			}
			else if (choix2 == 2)
			{
				printf("Saisir x : ");
				scanf_s_s("%d", &x);
			}

			resultat = x % y;
		}
		else if (menu == 6)
		{
			printf("PUISSANCE ( x puissance de y ): \n");

			if (choix2 == 0)
			{
				printf("Saisir x : ");
				scanf_s_s("%d", &x);

				printf("Saisir y : ");
				scanf_s_s("%d", &y);
			}
			else if (choix2 == 1)
			{
				printf("Saisir y : ");
				scanf_s_s("%d", &y);
			}
			else if (choix2 == 2)
			{
				printf("Saisir x : ");
				scanf_s_s("%d", &x);
			}

			resultat = pow(x, y);
		}

		printf("le resultat est %d\n", resultat);

		printf("Recommencer ?\n");
		printf("Oui = 1, Non = 0\n");
		scanf_s_s("%d", &choix);


		if (choix == 1)
		{

			printf("reutiliser le resultat ?\n Non = 0\n Oui pour x = 1\n Oui pour y = 2\n");
			scanf_s_s("%d", &choix2);

			if (choix2 == 1)
			{
				x = resultat;
			}
			else if (choix2 == 2)
			{
				y = resultat;
			}
		}


	} while (choix == 1);



	return 0;

}