#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pi();
double fahren_cels(double fahrenheit);
double cels_fahren(double celsuis);
double perimetre_cercle(double diametre);
double aire_triangle(double hauteur, double base);
double volume_cylindre(double rayon, double hauteur);

int main(int argc, char * argv[]){

	int menu = 0;



	printf("1 -> P.I\n");
	printf("2 -> Fahrenheit en Celsius\n");
	printf("3 -> Celsius en Fahrenheit\n");
	printf("4 -> Puissance\n");
	printf("5 -> Perimetre Cercle\n");
	printf("6 -> Aire triangle\n");
	printf("7 -> Volume Cylindre\n");


	scanf_s("%d", &menu);

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
		scanf_s("%lf", &fahrenheit);
		double celsuis = fahren_cels(fahrenheit);
		printf("Le rez en C est %.2lf", celsuis);
		break;

	case 3:

		printf("Celsius en Fahrenheit\n");
		double celsius;
		printf("Donne ta temperature en C:\n");
		scanf_s("%lf", &celsius);
		double fahrenheit_rez = cels_fahren(celsius);
		printf("Le rez en F est %.2lf\n", fahrenheit_rez);

		break;

	case 4:
		printf("Puissance\n");
		printf("Donnez val 1:\n");
		double val1; scanf_s("%lf", &val1);
		printf("Donnez val 2:\n");
		double val2; scanf_s("%lf", &val2);

		double rez = pow(val1, val2);

		printf("Le rez est %.2lf\n", rez);
		break;
	case 5:
		printf("Perimetre Cercle\n");
		printf("Donner le Diametre du cercle\n");
		double diametre; scanf_s("%lf", &diametre);
		double perimetre = perimetre_cercle(diametre);
		printf("Le perimetre est %.2lf", perimetre);
		break;

	case 6:

		printf("Aire triangle\n");
		printf("Donner hauteur du triangle:\n");
		double hauteur;
		scanf_s("%lf", &hauteur);
		printf("Donner la base du triangle:\n");
		double base;
		scanf_s("%lf", &base);
		double aire = aire_triangle(hauteur, base);
		printf("l'aire est %.2lf\n", aire);
		break;

	case 7:

		printf("Volume Cylindre\n");

		printf("Taper le rayon:\n");
		double rayon; 
		scanf_s("%lf", &rayon);
		printf("Taper la hauteur:\n");
		double haut; 
		scanf_s("%lf", &haut);
		double volume = volume_cylindre(rayon, haut);
		printf("Le volume est %.2lf\n", volume);
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

double aire_triangle(double hauteur, double base) {

	double aire = hauteur * base / 2.0;

	return aire;
}
double volume_cylindre(double rayon, double hauteur) {

	double volume =  (rayon * rayon) * hauteur * pi();
	return volume;
}