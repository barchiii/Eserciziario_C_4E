/*Dati due numeri interi e positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine decrescente i numeri compresi tra N1 e N2. */

#include <stdio.h>
int main(int argc, char *argv[])
{

    int N1, N2;

    do
    {
        printf("Inserisci N1: ");
        scanf("%d", &N1);

        printf("\nInserisci N2>N1: ");
        scanf("%d", &N2);

    } while (N1 >= N2 && N1 > 0 && N2 > 0);

    printf("|dStampa numeri compresi tra %d e %d:\n", N1, N2);
    do
    {
        N1++;
        printf("%d\t", N1);
    } while (N1 < N2);

    return 0;
}