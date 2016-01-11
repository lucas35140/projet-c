#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int valeur;
	int x = 0;
	int y = 0;
	int min = 0;
	printf("Donnez une valeur en 1 et 10:\n");
	scanf("%d", &valeur);

	while (x < valeur)
	{
		y = 0;
		x++;

		while (y < x)
		{
			printf("*");
			y++;
		}
		printf("\n");
	}

	while (x > min)
	{
		y = 0;
		x--;

		while (y < x)
		{
			printf("*");
			y++;
		}
		printf("\n");
	}

	system("pause");
}