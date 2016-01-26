#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int i = 0;
	int match = 0;
	printf("Saisir Nombre de match");
	scanf("%d", &match);

	int equipe1 = (int *)calloc(sizeof(int), match);
	int equipe2 = (int *)calloc(sizeof(int), match);



	return 0;
	system("pause");
}