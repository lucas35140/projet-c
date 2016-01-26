#include <stdio.h>
#include <stdlib.h>

#include "affichage.h"
#include "traitement.h"

//=========================================

void Menu() {
	int menu = 1;
	int menu_choix = 0;



	do
	{

		printf("\n----MENU----\n");
		printf("1 => Division\n");
		printf("2 => Minute en heure\n");
		printf("3 => Octet en Kilo octet\n");
		printf("4 => Inverter\n");
		printf("5 => Code ASCII\n");

		scanf("%d", &menu_choix);

		switch (menu_choix)
		{
		case 1:
			affichDivision();
			system("pause");
			system("cls");
			break;

		case 2:
			AffichagedecoupeMinute();
			system("pause");
			system("cls");
			break;

		case 3:
			AffichagedecoupeOctet();
			system("pause");
			system("cls");
			break;

		case 4:
			Affichageinverter();
			system("pause");
			system("cls");
			break;

		case 5:
			ASCII();
			system("pause");
			system("cls");
			break;
		default:
			menu = 0;
			break;
		}

	} while (menu == 1);

}

void affichDivision() {
	printf("\n === DIVISION ===\n\n");

	int y = 0, x = 0, rez = 0, modulo = 0;


	printf("Donnez X\n");
	scanf("%d", &x);
	printf("Donnez Y\n");
	scanf("%d", &y);

	modulo = division(x, y, &rez);

	printf("Le resultat est %d, et il reste %d\n", rez, modulo);
}

void AffichagedecoupeMinute() {
	printf("\n === Decoupe minute === \n\n");
	int minute, heure, jour;
	printf("Saisir les minutes : \n");
	scanf("%d", &minute);

	decoupeMinute(&heure, &minute, &jour);

	printf("Il y a : %d jour, %d heure, %d minute\n", jour, heure, minute);

}

void AffichagedecoupeOctet() {

	printf("\n === Decoupe Octet === \n\n");

	int octet, kilooctet, megaoctet;

	printf("Saisir Octet : \n");
	scanf("%d", &octet);

	decoupeOctet(&octet, &kilooctet, &megaoctet);

	printf("Il y a : %d Mega Octet, %d Kilo Octect, %d Octet\n", megaoctet, kilooctet, octet);

}
void Affichageinverter() {
	printf("\n === Invert === \n\n");
	int a = 0, b = 0;

	printf("Saisir chiffre 1\n");
	scanf("%d", &a);

	printf("Saisir chiffre 2 \n");
	scanf("%d", &b);

	inverter(&a, &b);

	printf("Le a = %d et le b = %d\n", a, b);


}
void ASCII() {
	int ascii = 1;
	printf("\n\n=== Tab ASCII ===\n");
	while (ascii <= 239)
	{

		printf("Caractere %c ", ascii);
		printf("Decimal %d ", ascii);
		printf("Hexadecimal %x\n", ascii);
		ascii++;
	}
}



