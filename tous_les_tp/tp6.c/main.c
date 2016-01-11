#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pi();
double fahren_cels(double fahrenheit);
double cels_fahren(double celsuis);
double perimetre_cercle(double diametre);

int main(int argc, char * argv[]){

	int menu = 0;



	printf("1 -> P.I\n");
	printf("2 -> Fahrenheit en Celsius\n");
	printf("3 -> Celsius en Fahrenheit\n");
	printf("4 -> Puissance\n");
	printf("5 -> Perimetre Cercle\n");

	scanf("%d", &menu);

	switch (menu)
	{
	case 1:

		printf("P.I\n");
		double p_i = pi();
		printf("PI est egale a %.8lf\n", p_i);
		break;

	case 2:

		printf("Fahrenheit en Celsius\n");
		double fahrenheit;
		printf("Donne ta temperature en F:\n");
		scanf("%lf", &fahrenheit);
		double celsuis = fahren_cels(fahrenheit);
		printf("Le rez en C est %.2lf", celsuis);
		break;

	case 3:

		printf("Celsius en Fahrenheit\n");
		double celsius;
		printf("Donne ta temperature en C:\n");
		scanf("%lf", &celsius);
		double fahrenheit_rez = cels_fahren(celsius);
		printf("Le rez en F est %.2lf\n", fahrenheit_rez);

		break;

	case 4:
		printf("Puissance\n");
		printf("Donnez val 1:\n");
		int val1; scanf("%d", &val1);
		printf("Donnez val 2:\n");
		int val2; scanf("%d", &val2);

		int rez = pow(val1, val2);

		printf("Le rez est %d\n", rez);
		break;
	case 5:
		printf("Perimetre Cercle\n");
		printf("Donner le Diametre du cercle\n");
		double diametre; scanf("%lf", &diametre);
		double perimetre = perimetre_cercle(diametre);
		printf("Le perimetre est %.2lf", perimetre);
		break;
	default:
		break;
	}

	system("pause");
}

double pi(){

	double pi = 3.14159265359;
	return pi;
}

double fahren_cels(double fahrenheit){

	double celsuis = 0;
	celsuis = (fahrenheit - 32.0) * (5.0 / 9.0);

	return celsuis;
}

double cels_fahren(double celsuis){
	double fahrenheit = 0;
	fahrenheit = (celsuis * 9.0) / 5.0 + 32.0;

	return fahrenheit;
}

double perimetre_cercle(double diametre){

	double perimetre = diametre * pi();
	return perimetre;
}

