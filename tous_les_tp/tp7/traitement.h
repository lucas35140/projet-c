#ifndef TRAITEMENT
#define TRAITEMENT

void InitialiserTableau(int tableau[], int tailleTableau, int val);
void InitialiserTableauRandom(int tableau[], int tailleTableau, int max);
int SommeTableau(int tableau[], int tailleTableau);
int NombreElementsTableau(int tableau[], int tailleTableau);
int PlusPetitElementTableau(int tableau[], int tailleTableau);
int PositionPlusPetitElementTableau(int tableau[], int tailleTableau);
int TableauEstOrdonne(int tableau[], int tailleTableau, int asc);
void OrdonneTableau(int tableau[], int tailleTableau, int asc);
int RechercheDichotomique(int tableau[], int tailleTableau, int val);

#endif // !TRAITEMENT
