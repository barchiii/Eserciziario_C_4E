/* Esercizio 1
	Progettare un algoritmo che effettui la lettura da tastiera di una serie di coppie di valori numerici.
	L'algoritmo deve calcolare e stampare il rapporto tra il valore minore e quello maggiore dei due. Il
	programma termina quando uno dei due valori o entrambi sono uguali a zero. */
	
#include <stdio.h>

int main()
{
	
	int n1, n2;
	double rapporto;
	
	do
	{
		printf("Inserisci n1\n");
		scanf("%d", &n1);
		printf("Inserisci n2\n");
		scanf("%d", &n2);
		
		if (n1 < n2)
			rapporto = (double)n1 / (double)n2;
		else
			rapporto = (double)n2 / (double)n1;
		
		printf("Il rapporto e': %f\n", rapporto);
	} while (n1 != 0 && n2 != 0);
	
	return 0;
}
