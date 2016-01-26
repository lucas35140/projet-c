#include <stdint.h>
#include <stdio.h>
#include "affichage.h"
#include "palin.h"

void palindromeAffich(char * Ppalin) {
	int lebool;
	printf("Taper le mot\n\n");

	scanf("%s", Ppalin);

	MajtoMin(Ppalin);

	lebool = palindrome(Ppalin);


	if (lebool == 0) {
		printf("\nN'est pas un palindrome\n\n");
	}
	else if(lebool == 1){
		printf("C'est un Palindrome\n\n");
	}

}