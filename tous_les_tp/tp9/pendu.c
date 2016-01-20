#include "pendu.h"

void Transformation(char principal[], char secondaire[]) {
	int i = 0;
	int j = 0;
	while (principal[i] != '\0')
	{
		secondaire[i] = '_';
		i++;
		j++;
	}
	secondaire[i] = '\0';
}

int TestCaractere(char principal[], char secondaire[], char caractere) {

	int i = 0;
	int test = 0;
	while (principal[i] != '\0') {

		if (principal[i] == caractere) {

			if (secondaire[i] == caractere) {
				test = 0;
			}
			else {
				secondaire[i] = principal[i];
				test = 1;
			}
		}

		i++;
	}
	return test;
}

int TestChaine(char principal[], char secondaire[]) {
	int test = 1;
	int i = 0;
	while (principal[i] != '\0')
	{

		if (principal[i] != secondaire[i]) {
			test = 0;
			return test;
		}


		i++;
	}

	return test;
}