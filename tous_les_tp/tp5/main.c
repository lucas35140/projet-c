#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	int base;
	int x = 1;
	int y = 0;
	int nombreEspace = 0;


	do{
		printf("Combien d'etoiles pour la base ? (saisir un nombre impair)\n");
		fflush(stdin);
		scanf_s("%d", &base);
	} while (base % 2 == 0); //test nombre impaire


	while (x <= base){
		nombreEspace = (base - x) / 2;
		y = 0;
		while (y < nombreEspace){
			printf(" ");
			y++;
		}
		y = 0;
		while (y < x){
			printf("*");
			y++;
		}
		y = 0;

		while (y < nombreEspace){
			printf(" ");
			y++;
		}
		printf("\n");
		x = x + 2;
	}

	system("pause");
}