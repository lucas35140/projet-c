#include "palin.h"



int palindrome(char * Ppalin) {

	int max = 0;
	int i = 0;
	while (*(Ppalin + max) != '\0')
	{
		max++;
	}

	while (i < max)
	{
		if (*(Ppalin + i) != *(Ppalin + max - 1)) {
			return 0;
		}
		max--;
		i++;
	}
	return 1;
}

void MajtoMin(char * Ppalin) {

	int i = 0;


	while (*(Ppalin + i) != '\0') {
		if (*(Ppalin + i) >= 65 && *(Ppalin + i) <= 90) {
			*(Ppalin + i) = *(Ppalin + i) + 32;
		}
		i++;
	}
}