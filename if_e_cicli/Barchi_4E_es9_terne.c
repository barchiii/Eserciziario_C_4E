/* Progettare un algoritmo che risolva il seguente problema. Si richieda 
all’utente di inserire una serie di terne di dati numerici (A, B, C). 
Il programma deve terminare quando uno dei valori inseriti è minore di
zero. Si scartino le terne nelle quali i valori non sono in ordine
strettamente crescente, ovvero quelle terne per cui non valga A < B < C.
Su tutte le terne non scartate si calcoli il massimo e il minimo dei
valori inseriti. Si stampino a video tali valori massimi e minimi prima
di terminare il programma. */

#include <stdio.h>

int main(int argc, char* argv[])
{

    int A, B, C, min = 0, max = 0;

    do
    {

        printf("\nInserisci A :");
        scanf("%d", &A);
        printf("\nInserisci B :");
        scanf("%d", &B);
        printf("\nInserisci C :");
        scanf("%d", &C);

        if(A < B && B < C)
        {

            if (A < min)
            {
                min = A;
            }
                
            if (C > max)
            {
            	max = C;
            }

        }

        else
            printf("\nTerna inserita non valida\n")
    }while(A >= 0 && B >= 0 && C >= 0);

    printf("Il numero minimo e': %d\n", min);
    printf("Il numero massimo e': %d\n", max);

    return 0;
    
}